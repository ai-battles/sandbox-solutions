// Пример программы нахождения максимального элемента в массиве из 20 чисел. 
public class Main {
    public static void main(String[] args) {
        final int LENGHT = 20;

        int m[] = new int[LENGHT];

        // Заполняем массив m из параметров запуска 
        // Нумерация входных параметров начинается с 0 индекса массива args
        for (int i = 0; i < LENGHT; i++) {
            // Получаем значения i-ого элемента массива
            m[i] = Integer.parseInt(args[i]);
        }

        // Находим максимальный элемент
        int max = m[0];
        for (int i = 1; i < LENGHT; i++) {
            if (m[i] > max) {
                max = m[i];
            }
        }

        // Вывод результата
        System.out.print(max);
    }
}
