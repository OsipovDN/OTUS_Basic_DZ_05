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

void Pct90::update(double next) {
	double i=0;
	array.push_back(next);
	sort(array.begin(), array.end());
	i =ceil( 0.9 * array.size());
	count = array[i];
}

double Pct90::eval()const {
	return count;
}
const char* Pct90::name() const {
	return "pct90";
}