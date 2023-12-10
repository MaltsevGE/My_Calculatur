#include <iostream>
#include <string>
#include "calculator.h"

using namespace std;

int main()
{
    bool status = true;
    char select;

    setlocale(LC_ALL, "ru");

    cout << "Программа Калькулятор версия 2.0.0.0, разработчик: Мальцев Глеб Евгеньевич" << endl << endl;
    cout << "Выбирите режим калькулятора:" << endl;
    cout << "1 - Простые операции" << endl;
    cout << "2 - Вычесление корня" << endl;
    cout << "3 - Возведение в степень" << endl;
    cout << "4 - Решение линейного уровнения" << endl;
    cout << "5 - Решение корня квадратного уравнения" << endl << endl;

    while (status)
    {
        while (cin >> select)
        {
            if (isdigit(select)) {
                switch (select)
                {
                case '1':
                    cout << "1" << endl;
                    break;
                case '2':
                    cout << "2" << endl;
                    break;
                case '3':
                    cout << "3" << endl;
                    break;
                case '4':
                    cout << "4" << endl;
                    break;
                case '5':
                    cout << "5" << endl;
                    break;
                default:
                    cout << "Неверный выбор режима, повторите ввод." << endl;
                    break;
                }
            } 
            else
            {
                cout << "Для выбора режима нужно использовать цифры." << endl;
            }
        }
    }

    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

 /*
    cout << "Пожалуйста, введите операцию, которую необходимо выполнить. Формат: a+b | a-b | a*b | a/b" << endl;
    
    calculator c;
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
*/

    return 0;
}
