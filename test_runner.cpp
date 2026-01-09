// ==========================================
// FILE: test_runner.cpp
// ==========================================
#include <iostream>
#include "calculator.hpp"

/**
 * Function statement to encapsulate specific test logic.
 * This keeps the main test entry point clean.
 */
bool runAdditionTest()
{
	Calculator calc;
	calc.addNumber(10);
	calc.addNumber(20);

	return calc.sum() == 30;
}

/**
 * Main entry point for the CI/CD pipeline.
 * Returns 0 on success, non-zero on failure.
 */
int main()
{
	std::cout << "Starting CI Pipeline Unit Tests..." << std::endl;

	if (runAdditionTest())
	{
		std::cout << "SUCCESS: Addition test passed." << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "FAILURE: Addition test failed." << std::endl;
		return 1; // Signals the pipeline to stop
	}
}