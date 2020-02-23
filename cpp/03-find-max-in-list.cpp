// Пример программы нахождения максимального элемента в массиве из 20 чисел. 
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    const int LENGHT = 20;

    int m[LENGHT] = { }; 

    // Заполняем массив m из параметров запуска 
    // Нумерация входных параметров начинается с 1 индекса массива argv
    for (int i = 0; i < LENGHT; i++) {
        // Получаем значения i-ого элемента массива
        m[i] = atoi(argv[i + 1]);
    }

    // Находим максимальный элемент
    int max = m[0];
    for (int i = 1; i < LENGHT; i++) {
        if (m[i] > max) {
            max = m[i];
        }
    }

    // Вывод результата
    cout << max;
}
