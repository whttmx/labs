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
        return 0;
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

    /*--------------------PART 2---------------------------------------*/

    int N;

    std::cout << "Введите номер рейса:" << std::endl;
    std::cin >> N;

    switch(N)
    {
        case 113:
            std::cout << "Калининград - Чапаево" << std::endl;
            break;
        case 114:
        case 141:
            std::cout << "Калининград - Зеленоградск" << std::endl;
            break;
        case 117:
            std::cout << "Калининград - Мамоново" << std::endl;
            break;
        case 118:
            std::cout << "Калининград - Светлогорск" << std::endl;
            break;
        case 119:
            std::cout << "Калининград - Пионерский" << std::endl;
            break;
        case 125:
            std::cout << "Калининград - Донское" << std::endl;
            break;
        case 136:
            std::cout << "Калининград - Партизанское" << std::endl;
            break;
        case 148:
        case 191:
            std::cout << "Калининград - Багратионовск" << std::endl;
            break;
        case 161:
            std::cout << "Калининград - Светлое" << std::endl;
            break;
        case 593:
            std::cout << "Калининград - Морское" << std::endl;
            break;
        case 802:
            std::cout << "Калининград - Гданьск" << std::endl;
            break;
        default:
            std::cout << "Неверно введён номер рейса N" << std::endl;
        
    };

    return 0;
}