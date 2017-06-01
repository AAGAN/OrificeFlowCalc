#include <iostream>
#include <assert.h>

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
    
    OrificeFlowCalc(MFR = 0, Pin = 0, orifice_diameter = 0, density = 0, beta = 0, coe = 0);
    std::cout << "MFR = " << MFR << std::endl << "Pin = " << Pin << std::endl << "orifice_diameter = " << orifice_diameter << std::endl << "density = " << density << std::endl << "beta = " << beta << std::endl << "coe = " << coe << std::endl;
    
    OrificeFlowCalc( MFR = 1, Pin = 1000000 , orifice_diameter = 0.2, density = 14.0, beta = 0 , coe = 0);
    std::cout << "MFR = " << MFR << std::endl << "Pin = " << Pin << std::endl << "orifice_diameter = " << orifice_diameter << std::endl << "density = " << density << std::endl << "beta = " << beta << std::endl << "coe = " << coe << std::endl;
    
    
    return 0;
}
