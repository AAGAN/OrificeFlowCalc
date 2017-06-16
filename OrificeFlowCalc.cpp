#include "OrificeFlowCalc.h"
#include <cmath>

/**
calculates the mass flow rate through an orifice based on the upstream pressure 


returns 0 if OK
returns 1 if velocity is more than or equal to 0.85 of speed of sound!
*/
int OrificeFlowCalc(double& qP, double PiN, double sDNOZ, double sDensity, double beTa, double& coe)
{

	qP = qP * 2.2046;
	PiN = PiN / 6895.0;
	sDNOZ = sDNOZ * 39.37008;
	sDensity = sDensity * 0.06243;
	

	double cpRatio = 1.25 * (0.52 + 0.06789 * beTa - 0.3174639 * std::pow(beTa, 2.0) + 0.4230079 * std::pow(beTa, 3.0));
	double delp = 0.0;
	if (PiN*cpRatio > 15.0) delp = cpRatio * PiN;
	if (PiN * cpRatio <= 15.0) delp = PiN - 15;
	double ID = sDNOZ / beTa;
	double Yfactor = 1 - cpRatio * (0.1453 + 0.3013 * beTa);
	coe = 1.2875 * (0.52299 + 0.63301 * beTa - 1.7093 * std::pow(beTa, 2.0) + 1.65 * std::pow(beTa, 3.0));
	if (ID >= 0.54 && ID < 0.63) coe = coe * 0.955;
	if (ID < 0.54 && ID > 0.4) coe = coe * 0.95;
	if (ID < 0.4) coe = coe * 0.935;
	coe = coe * 0.85;
	qP = std::pow(sDNOZ, 2.0) * 0.525 * Yfactor * coe * std::sqrt(sDensity * delp);

	double Vel = 183.3 * qP / sDensity / std::pow(sDNOZ, 2.0);
	double VelS = std::sqrt(32.2 * 144.0 * PiN * 1.4578 / sDensity);

	qP = qP / 2.2046;

	if (Vel < VelS) return 0;
	if (Vel >= VelS) return 1; 
}
