#include <iostream>

int main()
{
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