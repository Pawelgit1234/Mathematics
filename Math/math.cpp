#include "Math.h"

#define _USE_MATH_DEFINES
#include <cmath>

namespace Math
{
	constexpr double DEG_TO_RAD = M_PI / 180.0;
	constexpr double RAD_TO_DEG = 180.0 / M_PI;

	double laplaceProbability(int favorableOutcomes, int possibleOutcomes)
	{
        if (possibleOutcomes == 0 || favorableOutcomes > possibleOutcomes)
            return 0.0;

        return (double)favorableOutcomes / (double)possibleOutcomes;
	}

	double calculateFunc_m(const Point& p1, const Point& p2)
	{
		if ((p2.y - p1.y) == 0 || (p2.x - p1.x) == 0)
			return 0;
		return (p2.y - p1.y) / (p2.x - p1.x);
	}

	double calculateFunc_b(const Point& p, double m)
	{
		return p.y - m * p.x;
	}

	double calculateFuncZero(double m, double b)
	{
		if (m == 0)
			return 0;
		return -b / m;
	}

	Point findIntersection(double m1, double b1, double m2, double b2)
	{
		if (m1 == m2)
			return { 0.0, 0.0 };

		double xIntersection = (b2 - b1) / (m1 - m2);
		double yIntersection = m1 * xIntersection + b1;
		return { xIntersection, yIntersection };
	}

	double binomialProbability(int n, int k, double p)
	{
		double q = 1.0 - p;
		double coefficient = std::tgamma(n + 1) / (std::tgamma(k + 1) * std::tgamma(n - k + 1));
		return coefficient * std::pow(p, k) * std::pow(q, n - k);
	}
	
	double airToGlassRefraction(double angleOfIncidence)
	{
		return std::asin(std::sin(angleOfIncidence * DEG_TO_RAD) / 1.5) * RAD_TO_DEG;
	}

	double glassToAirRefraction(double angleOfIncidence)
	{
		return std::asin(1.5 * std::sin(angleOfIncidence * DEG_TO_RAD)) * RAD_TO_DEG;
	}

	double airToDiamondRefraction(double angleOfIncidence)
	{
		return std::asin(std::sin(angleOfIncidence * DEG_TO_RAD) / 2.4) * RAD_TO_DEG;
	}

	double diamondToAirRefraction(double angleOfIncidence)
	{
		return std::asin(2.4 * std::sin(angleOfIncidence * DEG_TO_RAD)) * RAD_TO_DEG;
	}
	
	double airToWaterRefraction(double angleOfIncidence)
	{
		return std::asin(std::sin(angleOfIncidence * DEG_TO_RAD) / 1.33) * RAD_TO_DEG;
	}

	double waterToAirRefraction(double angleOfIncidence)
	{
		return std::asin(1.33 * std::sin(angleOfIncidence * DEG_TO_RAD)) * RAD_TO_DEG;
	}

	double calculate_Z_InterestCharges(double K, double p)
	{
		return K * p / 100;
	}

	double calculate_K_InterestCharges(double Z, double p)
	{
		return Z * 100 / p;
	}

	double calculate_p_InterestCharges(double K, double Z)
	{
		return Z * 100 / K;
	}

	double calculateInterestChargesYears(double K, double p, double y)
	{
		return K * std::pow((1 + p / 100), y);
	}

	double calculateInterestChargesMonths(double K, double p, double m)
	{
		return (K * p * m) / (100 * 12);
	}

	double calculateInterestChargesDays(double K, double p, double d)
	{
		return (K * p * d) / (100 * 360);
	}
}