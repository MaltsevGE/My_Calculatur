#pragma once
class calculator
{
public:
	double add(double x, double y);
	double sub(double x, double y);
	double mul(double x, double y);
	double div(double x, double y);
	double deg(double x, double y);
	double sqr(double x);
	double lin(double a, double b);
	void fsqrt(double a, double b, double c, double& x1, double& x2, double& d);
};

