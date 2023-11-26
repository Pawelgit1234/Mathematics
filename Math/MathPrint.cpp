#include <iostream>
#include <cmath>

#include "MathPrint.h"
#include "Math.h"

namespace MathPrint
{
	void laplaceProbalityPrint()
	{
        int favorableOutcomes, possibleOutcomes;

        std::cout << "Favorable outcomes: ";
        std::cin >> favorableOutcomes;
        std::cout << "Possible outcomes: ";
        std::cin >> possibleOutcomes;

        std::cout << std::endl << "Result: " << Math::laplaceProbability(favorableOutcomes, possibleOutcomes) << " (" << Math::laplaceProbability(favorableOutcomes, possibleOutcomes)*100 << "%)" << std::endl;
	}
	void calculate_mPrint()
	{
        Math::Point p1, p2;

        std::cout << "X1: ";
        std::cin >> p1.x;
        std::cout << "Y1: ";
        std::cin >> p1.y;
        std::cout << "X2: ";
        std::cin >> p2.x;
        std::cout << "Y2: ";
        std::cin >> p2.y;

        std::cout << std::endl << "Result: " << Math::calculateFunc_m(p1, p2);
	}

    void calculate_bPrint()
    {
        Math::Point p;
        double m;

        std::cout << "X: ";
        std::cin >> p.x;
        std::cout << "Y: ";
        std::cin >> p.y;
        std::cout << "m: ";
        std::cin >> m;

        std::cout << std::endl << "Result: " << Math::calculateFunc_b(p, m) << std::endl;
    }

    void calculateZeroPrint()
    {
        double m, b;

        std::cout << "m: ";
        std::cin >> m;
        std::cout << "b: ";
        std::cin >> b;

        std::cout << std::endl << "Result: Z(" << Math::calculateFuncZero(m, b)  << "|0)" << std::endl;
    }

    void findIntersectionPrint()
    {
        double m1, b1, m2, b2;

        std::cout << "m1: ";
        std::cin >> m1;
        std::cout << "b1: ";
        std::cin >> b1;
        std::cout << "m2: ";
        std::cin >> m2;
        std::cout << "b2: ";
        std::cin >> b2;
        
        Math::Point p = Math::findIntersection(m1, b1, m2, b2);
        std::cout << std::endl << "Result: P(" << p.x << "|" << p.y << ")" << std::endl;
    }

    void binomialProbabilityPrint()
    {
        int n, k;
        double p;

        std::cout << "n: ";
        std::cin >> n;

        std::cout << "k: ";
        std::cin >> k;

        std::cout << "p: ";
        std::cin >> p;

        double probability = Math::binomialProbability(n, k, p);
        std::cout << std::endl << "Result: " << probability << "(" << probability * 100 << "%)" << std::endl;
    }

    void sinusPrint()
    {
        double angle;
        std::cout << "Angle: ";
        std::cin >> angle;
        std::cout << std::endl << "Result: " << std::sin(angle * Math::DEG_TO_RAD) << std::endl;
    }

    void cosinusPrint()
    {
        double angle;
        std::cout << "Angle: ";
        std::cin >> angle;
        std::cout << std::endl << "Result: " << std::cos(angle * Math::DEG_TO_RAD) << std::endl;
    }

    void tangensPrint()
    {
        double angle;
        std::cout << "Angle: ";
        std::cin >> angle;
        std::cout << std::endl << "Result: " << std::tan(angle * Math::DEG_TO_RAD) << std::endl;
    }

    void airToGlassRefractionPrint()
    {
        double angleOfIncidence;
        std::cout << "Angle of Incidence: ";
        std::cin >> angleOfIncidence;

        double result = Math::airToGlassRefraction(angleOfIncidence);
        std::cout << std::endl << "Result: " << result << "°" << std::endl;
    }

    void glassToAirRefractionPrint()
    {
        double angleOfIncidence;
        std::cout << "Angle of Incidence: ";
        std::cin >> angleOfIncidence;

        double result = Math::glassToAirRefraction(angleOfIncidence);
        std::cout << std::endl << "Result: " << result << "°" << std::endl;
    }

    void airToDiamondRefractionPrint()
    {
        double angleOfIncidence;
        std::cout << "Angle of Incidence: ";
        std::cin >> angleOfIncidence;

        double result = Math::airToDiamondRefraction(angleOfIncidence);
        std::cout << std::endl << "Result: " << result << "°" << std::endl;
    }

    void diamondToAirRefractionPrint()
    {
        double angleOfIncidence;
        std::cout << "Angle of Incidence: ";
        std::cin >> angleOfIncidence;

        double result = Math::diamondToAirRefraction(angleOfIncidence);
        std::cout << std::endl << "Result: " << result << "°" << std::endl;
    }

    void airToWaterRefractionPrint()
    {
        double angleOfIncidence;
        std::cout << "Angle of Incidence: ";
        std::cin >> angleOfIncidence;

        double result = Math::airToWaterRefraction(angleOfIncidence);
        std::cout << std::endl << "Result: " << result << "°" << std::endl;
    }

    void waterToAirRefractionPrint()
    {
        double angleOfIncidence;
        std::cout << "Angle of Incidence: ";
        std::cin >> angleOfIncidence;

        double result = Math::waterToAirRefraction(angleOfIncidence);
        std::cout << std::endl << "Result: " << result << "°" << std::endl;
    }

    void calculate_Z_InterestChargesPrint()
    {
        double K, p;

        std::cout << "K: ";
        std::cin >> K;
        std::cout << "p: ";
        std::cin >> p;

        double result = Math::calculate_Z_InterestCharges(K, p);
        std::cout << std::endl << "Result: " << result << std::endl;
    }

    void calculate_K_InterestChargesPrint()
    {
        double Z, p;

        std::cout << "Z: ";
        std::cin >> Z;
        std::cout << "p: ";
        std::cin >> p;

        double result = Math::calculate_K_InterestCharges(Z, p);
        std::cout << std::endl << "Result: " << result << std::endl;
    }

    void calculate_p_InterestChargesPrint()
    {
        double K, Z;

        std::cout << "K: ";
        std::cin >> K;
        std::cout << "Z: ";
        std::cin >> Z;

        double result = Math::calculate_p_InterestCharges(K, Z);
        std::cout << std::endl << "Result: " << result << std::endl;
    }

    void calculateInterestChargesYearsPrint()
    {
        double K, p, y;

        std::cout << "K: ";
        std::cin >> K;
        std::cout << "p: ";
        std::cin >> p;
        std::cout << "Years: ";
        std::cin >> y;

        double result = Math::calculateInterestChargesYears(K, p, y);
        std::cout << std::endl << "Result: " << result << " (" << result - K << ')' << std::endl;
    }

    void calculateInterestChargesMonthsPrint()
    {
        double K, p, m;

        std::cout << "K: ";
        std::cin >> K;
        std::cout << "p: ";
        std::cin >> p;
        std::cout << "Months: ";
        std::cin >> m;

        double result = Math::calculateInterestChargesMonths(K, p, m);
        std::cout << std::endl << "Result: " << result << std::endl;
    }

    void calculateInterestChargesDaysPrint()
    {
        double K, p, d;

        std::cout << "K: ";
        std::cin >> K;
        std::cout << "p: ";
        std::cin >> p;
        std::cout << "Days: ";
        std::cin >> d;

        double result = Math::calculateInterestChargesDays(K, p, d);
        std::cout << std::endl << "Result: " << result << std::endl;
    }


    std::vector<std::vector<void(*)(void) /* func */>> funcs{
            {
                calculate_mPrint,
                calculate_bPrint,
                calculateZeroPrint,
                findIntersectionPrint,
            },
            {
                laplaceProbalityPrint,
                binomialProbabilityPrint,
            },
            {
                sinusPrint,
                cosinusPrint,
                tangensPrint,
            },
            {
                airToGlassRefractionPrint,
                glassToAirRefractionPrint,
                airToDiamondRefractionPrint,
                diamondToAirRefractionPrint,
                airToWaterRefractionPrint,
                waterToAirRefractionPrint
            },
            {
                calculate_Z_InterestChargesPrint,
                calculate_K_InterestChargesPrint,
                calculate_p_InterestChargesPrint,
                calculateInterestChargesYearsPrint,
                calculateInterestChargesMonthsPrint,
                calculateInterestChargesDaysPrint,
            },
    };
}