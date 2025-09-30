#include <iostream>
#include <cmath>

int main()
{
    double a,b,c;
    double half_per;
    double area;
    
    std::cout << "Введите стороны треугольника:" << std::endl;
    std::cin >> a >> b >> c;


    half_per = (a+b+c)/2;
    area = sqrt(half_per*(half_per - a)*(half_per - b)*(half_per - c));

    std::cout << "Площадь треугольника:" << area << std::endl;
    std::cout << "double занимает " << sizeof(double) << " байт" << std::endl;
    return 0;

}