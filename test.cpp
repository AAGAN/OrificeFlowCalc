#include <iostream>
#include <assert.h>
#include "OrificeFlowCalc.h"

int main()
{
    // OrificeFlowCalc function calculates different methods for calculating the flow through an orifice
    // double beta = nozzle orifice diameter / upstream pipe diameter (dimensionless)
    // double orifice_diameter = orifice diameter (m)
    // double Pin = inlet pressure in Pa 
    // double density = upstream density (kg / m^3)
    // double MFR = mass flow rate through the orifice (kg/s)
    // double coe = nozzle flow coefficient (dimensionless)
    // OrificeFlowCalc(MFR, Pin, orifice_diameter, density, beta, coe)

	double MFR = 0.0;
	double Pin = 0.0;
	double orifice_diameter = 0.0;
	double density = 0.0;
	double beta = 0.0;
	double coe = 0.0;
	    
    OrificeFlowCalc(MFR = 0, Pin = 1160.0 * 6895.0, orifice_diameter = 0.205 * 0.0254, density = 10.10837 * 16.018, beta = 0.329582, coe = 0);
    std::cout << "MFR = " << MFR << std::endl << "Pin = " << Pin << std::endl << "orifice_diameter = " 
		<< orifice_diameter << std::endl << "density = " << density << std::endl << "beta = " 
		<< beta << std::endl << "coe = " << coe << std::endl << std::endl;
    
    OrificeFlowCalc( MFR = 1, Pin = 1000000 , orifice_diameter = 0.02, density = 14.0, beta = 0 , coe = 0);
    std::cout << "MFR = " << MFR << std::endl << "Pin = " << Pin << std::endl << "orifice_diameter = " 
		<< orifice_diameter << std::endl << "density = " << density << std::endl << "beta = " 
		<< beta << std::endl << "coe = " << coe << std::endl << std::endl;
        
    return 0;
}
