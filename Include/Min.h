#pragma once

#include <limits>
#include "IStatistics.h"

class Min : public IStatistics {
public:
	Min() : m_min{ std::numeric_limits<double>::min() } {}

	void update(double next) override {
		if (next < m_min) {
			m_min = next;
		}
	}

	double eval() const override {
		return m_min;
	}

	const char* name() const override {
		return "min";
	}

private:
	double m_min;
};