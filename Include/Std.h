#pragma once

#include <vector>
#include "IStatistics.h"


class Std :public IStatistics {
public:
	Std() :val(0), std(0) {}

	void Std::update(double next) override {
		array.push_back(next);
		val = 0;
		for (auto i = 0; i < array.size(); ++i) {
			val += pow((array[i] - array.size()), 2);
		}
		std = sqrt(val / array.size());
	}

	double Std::eval()const override {
		return std; 
	}
	const char* Std::name()const override {
		return "std"; 
	}

private:
	std::vector<double> array;
	double val;
	double std;
};