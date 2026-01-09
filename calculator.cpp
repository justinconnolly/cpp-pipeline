// ==========================================
// FILE: calculator.cpp
// ==========================================
#include "calculator.hpp"
#include <numeric>

void Calculator::addNumber(int n)
{
	numbers.push_back(n);
}

int Calculator::sum() const
{
	return std::accumulate(numbers.begin(), numbers.end(), 0);
}

void Calculator::clear()
{
	numbers.clear();
}
