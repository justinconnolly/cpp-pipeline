// ==========================================
// FILE: calculator.hpp
// ==========================================
#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <vector>

class Calculator
{
private:
	std::vector<int> numbers;

public:
	void addNumber(int n);
	int sum() const;
	void clear();
};

#endif
