#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    	return a * b + 0.5;
}

int Calculator::Pow(double a, double b)
{
    	return std::round(std::pow(a, b));
}

int Calculator::Percent(double a, double b)
{
    	return std::round((a * b) / 100);
}