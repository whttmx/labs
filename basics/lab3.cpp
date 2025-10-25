#include <iostream>
#include <cmath>

int main()
{

    int n;
    std::cout << "Введите количество чисел в последовательности: ";
    std::cin >> n;
    
    if (n <= 0) 
    {
        std::cout << "Последовательность неверна" << std::endl;
        return 0;
    }
    
    int sum = 0;
    int maxnum = 0;
    int maxind = 0;
    bool found = false;
    bool fnum = true;
    
    std::cout << "Введите " << n << " целых чисел:" << std::endl;
    
    for (int i = 1; i <= n; i++) 
    {
        int num;
        std::cin >> num;
        int modnum = abs(num);

        if (modnum != 0 && (modnum % 3 == 0 || modnum % 5 == 0 || modnum % 7 == 0)) 
        {
            continue;
        }

        sum += num;
        found = true;

        if (fnum)
        {
            maxnum = num;
            maxind = i;
            fnum = false;
        }
        else
        {
            if (num > maxnum)
            {
                maxnum = num;
                maxind = i;
            }
        }
    }

    if (found) 
    {
        std::cout << "Сумма чисел не кратных 3 5 и 7: " << sum << std::endl;
        std::cout << "Наибольшее подходящее число: " << maxnum << std::endl;
        std::cout << "Номер наибольшего подходящего числа: " << maxind << std::endl;
    } 
    else 
    {
        std::cout << "В последовательности нет чисел не кратных 3 5 и 7" << std::endl;
    }

    // --------------Второй пункт------------------//
    
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
    int tmp = absX;

    int count = 0;

    while (tmp > 0)
    {
        count++;
        tmp /= 10;
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