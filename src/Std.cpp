#include "Std.h"

void Std::update(double next) {
	array.push_back(next);
	val = 0;
	for (auto i = 0; i < array.size(); ++i) {
		val += pow((array[i] - array.size()), 2);
	}
	std = sqrt(val / array.size());
}

double Std::eval()const {
	return std;
}
const char* Std::name()const {
	return "std";
}