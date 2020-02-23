// Пример программы для умножения двух чисел, получаемых из аргументов 
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    // Получаем первые два аргумента
    // Нумерация входных параметров начинается с 1 индекса массива argv
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    // Вывод результата
    cout << a * b;
}
