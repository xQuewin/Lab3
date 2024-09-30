#include "StatsCalc.h"
#include <cmath>
float meanD = 4.0f;

float StatsCalc::mean(int x1, int x2, int x3, int x4)
{
	calcMean = (x1 + x2 + x3 + x4) / meanD;
	return calcMean;
}
float StatsCalc::standDev(int x1, int x2, int x3, int x4, float mean) {
	calcStand = std::sqrt((pow(x1 - mean, 2) + pow(x2 - mean, 2) + pow(x3 - mean, 2)
		+ pow(x4 - mean, 2)) / meanD);
		return calcStand;
}