#include <iostream>

int main() {
    double num1, num2;
    char operation;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Ошибка: деление на ноль!" << std::endl;
                return 0;
            }
            break;
        default:
            std::cout << "Ошибка: неверная операция!" << std::endl;
            return 0;
    }

    std::cout << "Результат: " << result << std::endl;

    return 0;
}