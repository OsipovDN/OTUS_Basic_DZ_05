#pragma once

#include "IStatistics.h"

class Mean : public IStatistics {
public:

	Mean() :sum(0), count(0) {}

	void update(double next) override;

	double eval() const override;

	const char* name() const override;

private:
	double sum;
	double count;
	double mean;
};