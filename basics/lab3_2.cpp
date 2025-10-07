#include <iostream>
#include <cmath>

int main()
{
    int x;
    std::cout << "Введите целое число |X| < 1000: ";
    std::cin >> x;

    if (abs(x) >= 1000)
    {
        std::cout << "Введено число большее по модулю чем 1000" << std::endl;
        return 0;
    }

    if (x == 0)
    {
        std::cout << "Количество разрядов: 1" << std::endl;
        std::cout << "Первая цифра: 0" << std::endl;
        
        return 0;
    }

    int absX = abs(x);
    int temp = absX;

    int count = 0;

    while (temp > 0)
    {
        count++;
        temp /= 10;
    }

    int firstDig = absX;

    while (firstDig >= 10)
    {
        firstDig /= 10;
    }

    std::cout << "Количество разрядов: " << count << std::endl;
    std::cout << "Первая цифра: " << firstDig << std::endl;

    return 0;
}