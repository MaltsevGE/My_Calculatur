#include "calculator.h"
#include <cmath>

// Сложение
double calculator::add(double x, char oper, double y)
{
    return x + y;
}

// Вычитание
double calculator::sub(double x, char oper, double y)
{
    return x - y;
}

// Умножение
double calculator::mul(double x, char oper, double y)
{
    return x * y;
}

// Деление
double calculator::div(double x, char oper, double y)
{
    return x / y;
} 

// Степень
double calculator::deg(double x, double y)
{
    return pow(x, y);
}

// Квадратный корень
double calculator::sqr(double x)
{
    return sqrt(x); 
}

// Линейное уравнение (ax = b)
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

// Корень квадратного уравнения
