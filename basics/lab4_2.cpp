#include <iostream>
using namespace std;

int main() {

    int array[8];
    
    cout << "Введите " << 8 << " целых чисел для массива:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "Элемент " << i << ": ";
        cin >> array[i];
    }
    
    cout << "Исходный массив: ";
    for (int i = 0; i < 8; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    int count25 = 0;
    for (int i = 0; i < 8; i++) {
        if (array[i] == 25) {
            count25++;
        }
    }
    
    if (count25 > 2) 
    {
        cout << "Число 25 встречается больше 2 раз" << endl;
        
        for (int i = 0; i < 8 - 1; i++) {
            for (int j = 0; j < 8 - i - 1; j++) {
                if (array[j] > array[j + 1]) {

                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
        
        cout << "Отсортированный массив: ";
        for (int i = 0; i < 8; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Число 25 встречается два раза или меньше" << endl;
    }
    
    const int ROWS = 3;
    const int COLS = 4;
    int matrix[3][4];
    
    cout << "Введите элементы матрицы 3x4" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
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
        cout << "Строка с наибольшим количеством нулей: " << rowWithMostZeros << endl;
        
        for (int j = 0; j < 4; j++) {
            if (matrix[rowWithMostZeros][j] == 0) {
                matrix[rowWithMostZeros][j] = 888;
            }
        }
        
        cout << "Матрица после замены нулей на 888:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
    } else {
        cout << "В матрице нет нулей" << endl;
    }
    
    return 0;
}