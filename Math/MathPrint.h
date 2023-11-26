#pragma once

#include <map>
#include <vector>

namespace MathPrint
{
    void laplaceProbalityPrint();
    void calculate_mPrint();
    void calculate_bPrint();
    void calculateZeroPrint();
    void findIntersectionPrint();
    void binomialProbabilityPrint();
    void sinusPrint();
    void cosinusPrint();
    void tangensPrint();
    void airToGlassRefractionPrint();
    void glassToAirRefractionPrint();
    void airToDiamondRefractionPrint();
    void diamondToAirRefractionPrint();
    void airToWaterRefractionPrint();
    void waterToAirRefractionPrint();
    void calculate_Z_InterestChargesPrint();
    void calculate_K_InterestChargesPrint();
    void calculate_p_InterestChargesPrint();
    void calculateInterestChargesYearsPrint();
    void calculateInterestChargesMonthsPrint();
    void calculateInterestChargesDaysPrint();

    extern std::vector<std::vector<void(*)(void) /* func */>> funcs;
};