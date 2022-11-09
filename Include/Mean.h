#pragma once

#include "IStatistics.h"

class Mean : public IStatistics {
public:

	Mean() :sum(0), count(0) {};

	void update(double next) override {
		sum += next;
		count++;
		mean = (sum / count);
	}

	double eval() const override {
		return mean;
	}

	const char* name() const override {
		return "mean";
	}

private:
	double sum;
	double count;
	double mean;
};