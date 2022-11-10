#include "Pct95.h"

void Pct95::update(double next) {
	array.push_back(next);
	sort(array.begin(), array.end());
	const auto i = static_cast<int>(round(0.95 * array.size())-1);
	count = array[i];
}

double Pct95::eval()const {
	return count;
}
const char* Pct95::name() const {
	return "pct95";
}