#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cout << "Введите кол-во чисел в последовательности: ";
    std::cin >> n; 

    if (n <= 0)
    {
        std::cout << "Кол-во чисел неккоректно" << std::endl;
        return 0;
    }

    int sum = 0;
    int maxNum = 0;
    int maxInd = -1;
    bool found = false;
    bool firstNum = true;

    std::cout << "Введите " << n << " целых чисел: " << std::endl;

    for (int i = 1; i <= n; i++)
    {
        int num;
        std::cin >> num;

        if (num % 3 != 0 && num % 5 != 0 && num % 7 != 0)
        {
            sum += num;
            found = true;

            if (firstNum)
            {
                maxNum = num;
                maxInd = i;
                firstNum = false;
            }
            else
            {
                if (num > maxNum)
                {
                    maxNum = num;
                    maxInd = i;
                }
            }
        } 
    }

    if (found)
    {
        std::cout << "Сумма: " << sum << std::endl;
        std::cout << "Наибольшее подходящее число: " << maxNum << std::endl;
        std::cout << "Номер наибольшего подходящего числа: " << maxInd << std::endl;
    }
    else
    {
        std::cout << "Нет чисел, не кратных 3 5 и 7" << std::endl;
    }

    return 0;
}