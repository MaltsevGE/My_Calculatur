#include <iostream>
#include "Calculatur.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Программа Калькулятор версия 1.0.0.0, разработчик: Мальцев Глеб Евгеньевич" << endl << endl;
    cout << "Пожалуйста, введите операцию, которую необходимо выполнить. Формат: a+b | a-b | a*b | a/b" << endl;
    
    Calculatur c;
    while (true)
    {
        cin >> x >> oper >> y;

        if (oper == '/' && (x == 0 || y== 0))
        {
            cout << "Вы попытались разделить на ноль, но увы не прокатило." << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Результат " << "операция " << x << oper << y << " равен: " << result << endl;
    }

    return 0;
}
