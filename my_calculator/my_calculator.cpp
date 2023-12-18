#include <iostream>
#include <string>
#include "calculator.h"

using namespace std;

int main()
{
    bool status = true;
    int choise = 0;

    setlocale(LC_ALL, "ru");

    cout << "Программа Калькулятор версия 4.0.1.0, разработчик: Мальцев Глеб Евгеньевич" << endl << endl;

    calculator calc;

    double a = 0;
    double b = 0;
    double c = 0;
    double d = 0;
    double x1 = 0;
    double x2 = 0;

    while (status)
    {



        cout << "Выберите режим калькулятора:" << endl;
        cout << "1 - Сложение" << endl;
        cout << "2 - Вычитание" << endl;
        cout << "3 - Умножение" << endl;
        cout << "4 - Деление" << endl;
        cout << "5 - Вычесление корня" << endl;
        cout << "6 - Возведение в степень" << endl;
        cout << "7 - Решение линейного уровнения" << endl;
        cout << "8 - Решение корня квадратного уравнения" << endl;
        cout << "0 - Завершение работы" << endl << endl;

        cin >> choise;
        cout << endl;


        switch (choise)
        {
            // Завершение работы
        case 0:
                cout << "Завершение работы." << endl << endl;
                status = false;
                break;

            // Сложение
        case 1:
            cout << "Введение слагаеммое 1: ";
            cin >> a;

            cout << "Введение слагаеммое 2: ";
            cin >> b;

            cout << "Результат: " << a << " + " << b << " = " << calc.add(a, b) << endl << endl;
            break;

            // Вычитание
        case 2:
            cout << "Введение уменьшаемое: ";
            cin >> a;

            cout << "Введение вычитаемое: ";
            cin >> b;

            cout << "Результат: " << a << " - " << b << " = " << calc.sub(a, b) << endl << endl;
            break;

            // Умножение
        case 3:
            cout << "Введение множитель 1: ";
            cin >> a;

            cout << "Введение множитель 2: ";
            cin >> b;

            cout << "Результат: " << a << " * " << b << " = " << calc.mul(a, b) << endl << endl;
            break;

            // Деление
        case 4:
            cout << "Введение делимое: ";
            cin >> a;

            cout << "Введение делитель: ";
            cin >> b;

            cout << "Результат: " << a << " / " << b << " = " << calc.div(a, b) << endl << endl;
            break;

            // Квадратный корень
        case 5:
            cout << "Введение число: " << endl;
            cin >> a;

            cout << "Квадратный корень" << a << " = " << calc.sqr(a) << endl << endl;
            break;

            // Возведение в степень
        case 6:
            cout << "Введение значение: ";
            cin >> a;

            cout << "Введите степень: ";
            cin >> b;

            cout << "Результат: " << a << " в степени " << b << " = " << calc.deg(a, b) << endl << endl;
            break;

            // Линейное уравнение
        case 7:
            cout << "Введение значение a: ";
            cin >> a;

            cout << "Введение значение b: ";
            cin >> b;

            cout << "Результат: x = " << calc.lin(a, b) << endl << endl;
            break;

            // Нахождение корней квадратного уравнения
        case 8:
            cout << "Введение значение a: ";
            cin >> a;

            cout << "Введение значение b: ";
            cin >> b;

            cout << "Введение значение c: ";
            cin >> c;

            calc.fsqrt(a, b, c, x1, x2, d);

            if (d < a)
            {
                cout << "При значении a = " << a << ", b = " << b << ", c = " << c << " нахождение корней квадратного уравнения не возможно." << endl << endl;
            }
            else
            {
                cout << "Результат: корень x1 = " << x1 << " , корень x2 = " << x2 << endl << endl;
            }

            break;

        default:
            cout << "Произведён неверный ввод, повторите ввод." << endl << endl;
            break;
        }
    }

    return 0;
}

