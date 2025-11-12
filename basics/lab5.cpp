#include <iostream>
#include <cmath>

// Функция для одного числа
double function(int a) {
    std::cout << "Используется функция для одного числа" << std::endl;
    if (a == 0) {
        return 0;
    }
    return 1.0 / a;
}

double function(int a, int b) {
    std::cout << "Используется функция для двух чисел" << std::endl;
    return a*a + 2*a*b + b*b;
}

void area(int a,int b,int c) {
    double halfp = (a + b + c) / 2.0;
    double area = sqrt(halfp * (halfp - a) * (halfp - b) * (halfp - c));
    std::cout << "Площадь треугольника: " << area << std::endl;
    return;
}

int main() {
    int n;
    std::cout << "Введите номер пункта: ";
    std::cin >> n;

    if (n == 1) {
        int numbers[3];
        int a,b,c;
        std::cout << "Введите три целых числа: ";
        std::cin >> a >> b >> c;

        numbers[0] = a;
        numbers[1] = b;
        numbers[2] = c;

        int withoutzero[3];
        int count = 0;
        for (int i = 0; i < 3; i++) {
            if (numbers[i] != 0) {
                withoutzero[count] = numbers[i];
                count = count + 1;
            }
        }
        if ((count == 0) || (count == 3)) 
        {
            return 0;
        } 
        else if (count == 1) 
        {
            double res = function(withoutzero[0]);
            std::cout << "Результат: " << res << std::endl;
        } 
        else 
        {
            double res = function(withoutzero[0], withoutzero[1]);
            std::cout << "Результат: " << res << std::endl;
        }
    } 
    else if (n == 2) 
    {
        int a,b,c;
        std::cout << "Введите три стороны треугольника";
        std::cin >> a >> b >> c;

        if (a <= 0 || b <= 0 || c <= 0)
        {
            return 0;
        }
        else
        {
            area(a,b,c);
        }
    } 
    else 
    {
        std::cout << "Некорректный номер" << std::endl;
        return 1;
    }

    return 0;
}