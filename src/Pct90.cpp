#include "Pct90.h"

void Pct90::update(double next) {
	double i = 0;
	array.push_back(next);
	sort(array.begin(), array.end());
	i = ceil(0.9 * array.size());
	count = array[i];
}

double Pct90::eval()const {
	return count;
}
const char* Pct90::name() const {
	return "pct90";
}