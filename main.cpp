/*------------------------------------------------------------------------------------------------------------------------
 ##task3##
 Объявить и заполнить двумерный динамический массив случайными числами от 1 до 70.
 Показать его на экран.
 Для заполнениея и показа на экран написать отдельные функции.
 - подсказка: функции должны принимать три параметра
     указатель на динамический массив, колличество строк, количество столбцов
 Количество строк и столбцов выбирает пользователь.
 Написать функцию, которая вычисляет сумму элементов, расположенных на побчной диагонали матрицы
------------------------------------------------------------------------------------------------------------------------
 ##task4##
 Напишите программу для управления аккаунтами пользователей.
 Используя один указатель на функцию, реализуйте функции для
 - добавления нового аккаунта,
 - удаления существующего аккаунта,
 - обновления информации об аккаунте
 - и вывода информации обо всех аккаунтах.
 В основной программе предложите пользователю выбрать соответстувующее действие и
 выполните операцию в соответствии с выбором пользователя
------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <cstdlib>
#include <string>

// Function to fill two-dimensional dynamic array in random numbers from 1 to 70
void fillArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 70 + 1;
        }
    }
}
// Function for displaying a two-dimensional dynamic array on the screen
void printArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
// Function for calculating the sum of elements on the side diagonal of the matrix
int sumDiagonal(int** arr, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += arr[i][cols - i - 1];
    }
    return sum;
}
// Function to solve task3
void task3(){



    int rows, cols;
    std::cout << "Input count of lines =>";
    std::cin >> rows;
    std::cout << "Input count of columns =>";
    std::cin >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    fillArray(matrix, rows, cols);
    std::cout << "two-dimensional array:" << std::endl;
    printArray(matrix, rows, cols);

    int diagonalSum = sumDiagonal(matrix, rows, cols);
    std::cout << "Sum of elements on the secondary diagonal =" << diagonalSum << std::endl;

    // Clear memory
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;




}
// Function to solve task4
void task4(){
    std::cout<<"test";
    std::cout << std::endl;
}


int main() {
    while (1>0){
        std::cout << std::endl;
        std::cout << "Select task, input 3 or 4. Or input 0 to close =>";
        std::string temp;
        std::cin>>temp;;
        if (temp == "3" or temp == "4" or temp == "0") {
            if (temp == "3") {
                task3();
            }
            if (temp == "4") {
                task4();
            }
            if (temp == "0") {
                break;
            }
        } else {
            std::cout << std::endl;
            std::cout << "invalid input" << std::endl;
        }
    };


//------------------------------------------------------------------------------------------------------------------------
    std::cout << std::endl;
    std::cout << "End program work." << std::endl;
    return 0;
}

