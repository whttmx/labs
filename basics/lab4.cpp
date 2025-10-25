#include <iostream>

int main() 
{
    
    const int number = 8;
    int array[number];
    
    std::cout << "Введите " << 8 << " целых чисел для массива:" << std::endl;
    for (int i = 0; i < 8; i++) 
    {
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
        if (array[i] == 25) 
        {
            count25++;
        }
    }
    
    if (count25 > 2) 
    {   
        for (int i = 0; i < number - 1; i++) 
        {
            for (int j = i+1; j < number; j++) 
            {
                if (array[i] > array[j]) 
                {
                    int tmp = array[i];
                    array[i] = array[j];
                    array[j] = tmp;
                }
            }
        }
        
        std::cout << "Отсортированный массив: ";
        for (int i = 0; i < 8; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    } 
    else 
    {
        std::cout << "Число 25 встречается два раза или меньше" << std::endl;
    }

    //------------------------ Пункт 2----------------------------------//

    const int row = 3;
    const int collumn = 4;
    int matrix[row][collumn];
    
    std::cout << "Введите элементы матрицы 3x4" << std::endl;
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < collumn; j++) 
        {
            std::cin >> matrix[i][j];
        }
    }
    
    std::cout << "Исходная матрица:" << std::endl;
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < collumn; j++) 
        {
            std::cout << matrix[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    
    int maxzero = -1;
    int rowzero = 0;
    
    for (int i = 0; i < row; i++) 
    {
        int count0 = 0;
        for (int j = 0; j < collumn; j++) 
        {
            if (matrix[i][j] == 0) 
            {
                count0++;
            }
        }
        
        if (count0 > maxzero) 
        {
            maxzero = count0;
            rowzero = i;
        }
    }

    if (maxzero > 0) 
    {
        std::cout << "Строка с наибольшим количеством нулей " << rowzero << std::endl;
        
        for (int i = 0; i < collumn; i++) 
        {
            if (matrix[rowzero][i] == 0) 
            {
                matrix[rowzero][i] = 888;
            }
        }
        
        std::cout << "Матрица после замены нулей на 888:" << std::endl;
        for (int i = 0; i < row; i++) 
        {
            for (int j = 0; j < collumn; j++) 
            {
                std::cout << matrix[i][j] << "  ";
            }
            std::cout << std::endl;
        }
    } 
    else 
    {
        std::cout << "В матрице нет нулей" << std::endl;
    }
    
    return 0;
}