// Пример программы для умножения двух чисел, получаемых из аргументов 
public class Main {
    public static void main(String[] args) {
        // Получаем первые два аргумента
        // Нумерация входных параметров начинается с 0 индекса массива args
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        // Вывод результата
        System.out.print(a * b);
    }
}
