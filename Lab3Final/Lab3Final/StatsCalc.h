
#ifndef STATSCALC_H
#define STATSCALC_H

class StatsCalc
{
public:
	StatsCalc() {};
	~StatsCalc() {};

	float mean(int x1, int x2, int x3, int x4);
	float standDev(int x1, int x2, int x3, int x4, float mean);

private:
	float calcMean = 0.0f;
	float calcStand;
};

#endif // !STATSCALC_H
