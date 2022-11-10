#include "Std.h"


void Std::update(double next) {
	array.push_back(next);
	sum += next;
	val = 0;
	double sred = sum / (array.size());
	for (auto i = 0; i < array.size(); ++i) {
		val += pow((array[i] - sred), 2);
	}
	if (array.size() <= 30) {
		std = sqrt(val / array.size() - 1);
	}
	else {
		std = sqrt(val / array.size());
	}
}

double Std::eval()const {
	return std;
}
const char* Std::name()const {
	return "std";
}