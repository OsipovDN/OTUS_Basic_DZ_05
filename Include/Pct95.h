#pragma once

#include <vector>
#include <algorithm>
#include <math.h>
#include "IStatistics.h"

class Pct95 : public IStatistics {
public:

	Pct95() :count(0) {}
	void update(double next) override;
	double eval() const override;
	const char* name() const override;

private:
	double count;
	std::vector <double> array;

};