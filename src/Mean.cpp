#include "Mean.h"

void Mean::update(double next) {
	sum += next;
	count++;
	mean = (sum / count);
}

double Mean::eval() const {
	return mean;
}

const char* Mean::name() const {
	return "mean";
}