#pragma once

#include <vector>
#include <algorithm>
#include <cmath>
#include "IStatistics.h"


class Pct90 : public IStatistics {
public:

	Pct90():count(0){}
	void update(double next) override;
	double eval() const override;
	const char* name() const override;

private:

	double count;
	std::vector <double> array;

};