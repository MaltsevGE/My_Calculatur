#include "calculator.h"
#include <cmath>

// ��������
double calculator::add(double x, char oper, double y)
{
    return x + y;
}

// ���������
double calculator::sub(double x, char oper, double y)
{
    return x - y;
}

// ���������
double calculator::mul(double x, char oper, double y)
{
    return x * y;
}

// �������
double calculator::div(double x, char oper, double y)
{
    return x / y;
} 

// �������
double calculator::deg(double x, double y)
{
    return pow(x, y);
}

// ���������� ������
double calculator::sqr(double x)
{
    return sqrt(x); 
}

// �������� ��������� (ax = b)
double calculator::lin(double a, double b)
{
    double result = 0;

    if (a == 0)
    {
        result = 0;
    }
    else
    {
        result = b / a; 
    }

    return result;
}

// ������ ����������� ���������
