#include "calculator.h"
#include <cmath>

// Сложение
double calculator::add(double x, double y)
{
    return x + y;
}

// Вычитание
double calculator::sub(double x, double y)
{
    return x - y;
}

// Умножение
double calculator::mul(double x, double y)
{
    return x * y;
}

// Деление
double calculator::div(double x, double y)
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

// Поиск кореней квадратного уравнения
void calculator::fsqrt(double a, double b, double c, double& x1, double& x2, double& d)
{
    d = b * b - 4 * a * c; 

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a; 

    }

    if (d == 0)
    {
        x1 = x2 = (-b) / 2 * a;
    }
}