#include "Pct90.h"

void Pct90::update(double next) {
	array.push_back(next);
	sort(array.begin(), array.end());
	const auto i = static_cast<int>(ceil(0.9 * array.size()) - 1);
	count = array[i];
}

double Pct90::eval()const {
	return count;
}
const char* Pct90::name() const {
	return "pct90";
}