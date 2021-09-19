#ifndef REAL_OPERATONS_HPP
#define REAL_OPERATONS_HPP

#include "Operation.hpp"

namespace Model {

	class Addition :public Operation {
	public:
		Addition();
		double execute(double a, double b) const override;
	};

	class Subtraction :public Operation {
	public:
		Subtraction();
		double execute(double a, double b) const override;
	};
}

#endif // !REAL_OPERATONS_HPP
