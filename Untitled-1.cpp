#include <iostream>
#include <cmath>

using namespace std;

double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double division(double a, double b) {
    return a / b;
}

double multiplication(double a, double b) {
    return a * b;
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double number) {
    return sqrt(number);
}

double percent(double number) {
    return number * 0.01;
}

int factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}

int main() {
    int choice;
    double num1, num2;
    
    while (true) {
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Частное" << endl;
        cout << "4. Произведение" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Нахождение квадратного корня" << endl;
        cout << "7. Нахождение 1 процента от числа" << endl;
        cout << "8. Найти факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cout << "Введите номер операции: ";
        cin >> choice;
        
        if (choice == 9) {
            cout << "Программа завершена." << endl;
            break;
        }
        
        cout << "Введите первое число: ";
        cin >> num1;
        
        if (choice != 6 && choice != 8) {
            cout << "Введите второе число: ";
            cin >> num2;
        }
        
        switch (choice) {
            case 1:
                cout << "Результат: " << addition(num1, num2) << endl;
                break;
            case 2:
                cout << "Результат: " << subtraction(num1, num2) << endl;
                break;
            case 3:
                cout << "Результат: " << division(num1, num2) << endl;
                break;
            case 4:
                cout << "Результат: " << multiplication(num1, num2) << endl;
                break;
            case 5:
                cout << "Результат: " << power(num1, num2) << endl;
                break;
            case 6:
                cout << "Результат: " << squareRoot(num1) << endl;
                break;
            case 7:
                cout << "Результат: " << percent(num1) << endl;
                break;
            case 8:
                cout << "Результат: " << factorial(static_cast<int>(num1)) << endl;
                break;
            default:
                cout << "Неверный выбор операции." << endl;
                break;
        }
        
        cout << endl;
    }
    
    return 0;
}