#pragma once

#include <vector>
#include "IStatistics.h"


class Std :public IStatistics {
public:
	Std() :sum(0),val(0), std(0) {}

	void update(double next) override;
	double eval()const override;
	const char* name()const override;

private:
	double sum;
	std::vector<double> array;
	double val;
	double std;
};