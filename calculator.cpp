#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    int choice;
    double num1, num2, result;

    do {
        std::cout << "Выберите операцию:\n";
        std::cout << "1. Сложение\n";
        std::cout << "2. Вычитание\n";
        std::cout << "3. Умножение\n";
        std::cout << "4. Деление\n";
        std::cout << "5. Возведение в степень\n";
        std::cout << "6. Нахождение квадратного корня\n";
        std::cout << "7. Нахождение 1 процента от числа\n";
        std::cout << "8. Найти факториал числа\n";
        std::cout << "9. Выйти из программы\n";
        std::cout << "Выберите операцию (1-9): ";
        std::cin >> choice;

        switch (choice) {
        case 1: // Сложение
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            result = num1 + num2;
            std::cout << "Результат: " << result << std::endl;
            break;

        case 2: // Вычитание
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            result = num1 - num2;
            std::cout << "Результат: " << result << std::endl;
            break;

        case 3: // Умножение
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            result = num1 * num2;
            std::cout << "Результат: " << result << std::endl;
            break;

        case 4: // Деление
            std::cout << "Введите делимое: ";
            std::cin >> num1;
            std::cout << "Введите делитель: ";
            std::cin >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Результат: " << result << std::endl;
            }
            else {
                std::cout << "Ошибка: деление на ноль!" << std::endl;
            }
            break;

        case 5: // Возведение в степень
            std::cout << "Введите число: ";
            std::cin >> num1;
            std::cout << "Введите степень: ";
            std::cin >> num2;
            result = std::pow(num1, num2);
            std::cout << "Результат: " << result << std::endl;
            break;

        case 6: // Нахождение квадратного корня
            std::cout << "Введите число: ";
            std::cin >> num1;
            if (num1 >= 0) {
                result = std::sqrt(num1);
                std::cout << "Результат: " << result << std::endl;
            }
            else {
                std::cout << "Ошибка: невозможно извлечь квадратный корень из отрицательного числа!" << std::endl;
            }
            break;

        case 7: // Нахождение 1 процента от числа
            std::cout << "Введите число: ";
            std::cin >> num1;
            result = num1 / 100;
            std::cout << "1% от числа: " << result << std::endl;
            break;

        case 8: // Найти факториал числа
            std::cout << "Введите число: ";
            std::cin >> num1;
            result = 1;
            for (int i = 1; i <= num1; i++) {
                result *= i;
            }
            std::cout << "Факториал числа: " << result << std::endl;
            break;

        case 9: // Выйти из программы
            std::cout << "Программа завершена." << std::endl;
            break;

        default:
            std::cout << "Ошибка: неверный выбор операции!" << std::endl;
            break;
        }

        std::cout << std::endl;
    } while (choice != 9);

    return 0;
}
