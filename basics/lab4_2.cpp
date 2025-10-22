#include <iostream>

int main() {

    int array[8];
    
    std::cout << "Введите " << 8 << " целых чисел для массива:" << std::endl;
    for (int i = 0; i < 8; i++) {
        std::cout << "Элемент " << i << ": ";
        std::cin >> array[i];
    }
    
    std::cout << "Исходный массив: ";
    for (int i = 0; i < 8; i++) 
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    
    int count25 = 0;
    for (int i = 0; i < 8; i++) 
    {
        if (array[i] == 25) {
            count25++;
        }
    }
    
    if (count25 > 2) 
    {
        std::cout << "Число 25 встречается больше 2 раз" << std::endl;
        
        for (int i = 0; i < 8 - 1; i++) {
            for (int j = 0; j < 8 - i - 1; j++) {
                if (array[j] > array[j + 1]) {

                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
        
        std::cout << "Отсортированный массив: ";
        for (int i = 0; i < 8; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Число 25 встречается два раза или меньше" << std::endl;
    }
    
    int matrix[3][4];
    
    std::cout << "Введите элементы матрицы 3x4" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> matrix[i][j];
        }
    }
    
    std::cout << "Исходная матрица:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    
    int maxZeroCount = -1;
    int rowWithMostZeros = 0;
    
    for (int i = 0; i < 3; i++) {
        int zeroCount = 0;
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
        
        if (zeroCount > maxZeroCount) {
            maxZeroCount = zeroCount;
            rowWithMostZeros = i;
        }
    }

    if (maxZeroCount > 0) {
        std::cout << "Строка с наибольшим количеством нулей: " << rowWithMostZeros << std::endl;
        
        for (int j = 0; j < 4; j++) {
            if (matrix[rowWithMostZeros][j] == 0) {
                matrix[rowWithMostZeros][j] = 888;
            }
        }
        
        std::cout << "Матрица после замены нулей на 888:" << std::endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                std::cout << matrix[i][j] << "\t";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "В матрице нет нулей" << std::endl;
    }
    
    return 0;
}