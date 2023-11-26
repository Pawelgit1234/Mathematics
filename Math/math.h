#pragma once

namespace Math
{
	struct Point
	{
		double x;
		double y;
	};

	extern const double DEG_TO_RAD;
	extern const double RAD_TO_DEG;


	double laplaceProbability(int favorableOutcomes, int possibleOutcomes);
	double calculateFunc_m(const Point& p1, const Point& p2);
	double calculateFunc_b(const Point& p, double m);
	double calculateFuncZero(double m, double b);
	Point findIntersection(double m1, double b1, double m2, double b2);
	double binomialProbability(int n, int k, double p);
	double airToGlassRefraction(double angleOfIncidence);
	double glassToAirRefraction(double angleOfIncidence);
	double airToDiamondRefraction(double angleOfIncidence);
	double diamondToAirRefraction(double angleOfIncidence);
	double airToWaterRefraction(double angleOfIncidence);
	double waterToAirRefraction(double angleOfIncidence);
	double calculate_Z_InterestCharges(double K, double p);
	double calculate_K_InterestCharges(double Z, double p);
	double calculate_p_InterestCharges(double K, double Z);
	double calculateInterestChargesYears(double K, double p, double y);
	double calculateInterestChargesMonths(double K, double p, double m);
	double calculateInterestChargesDays(double K, double p, double d);
}