#pragma once
class calculator
{
public:
	double add(double x, char oper, double y);
	double sub(double x, char oper, double y);
	double mul(double x, char oper, double y);
	double div(double x, char oper, double y);
	double deg(double x, double y);
	double sqr(double x);
	double lin(double a, double b);
};

