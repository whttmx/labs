#include <iostream>
#include <bitset>

int main()
{
    setlocale(LC_ALL, "RU");

    short A;
    int i;

    std::cout << "Введите число A: ";
    std::cin >> A;

    std::cout << "Введите номер бита i от 0 до 7: ";
    std::cin >> i;

    if (i < 0 || i > 7)
    {
        std::cout << "Введён неверный номер бита" << std::endl;
        return 1;
    }

    std::cout << A << " = " << std::bitset<8>(A) << std::endl;

    short bit = (A >> i) & 1;
    std::cout << i << " = " << bit << std::endl;

    if (bit == 0)
    {
        short result = A * A;
        result = result & ~(1 << i);

        std::cout << "A^2 = " << result << " = " << std::bitset<8>(result) << std::endl;
    } 
    else
    {
        short num = 125;
        short mask = 0xAA;
        short result2 = num & mask;

        std::cout << num << " = " << std::bitset<8>(num) << std::endl;
        std::cout << "Замена чётных битов на 0: " << result2 << " = " << std::bitset<8>(result2) << std::endl;

    }

    return 0;
}