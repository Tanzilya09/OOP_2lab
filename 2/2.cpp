#include <iostream>
using namespace std;

double power(double n, int p = 2);

int main() {
    setlocale(LC_ALL, "rus"); 
    double num;
    int exp;
    char choice;

    cout << "Введите число: ";
    cin >> num;
    cout << "Хотите ввести степень? (1=да/0=нет): ";
    cin >> choice;

    if (choice == '1') {
        cout << "Введите степень: ";
        cin >> exp;
        cout << "Результат: " << power(num, exp) << endl;
    }
    else {
        cout << "Результат (по умолчанию в квадрате): " << power(num) << endl;
    }

    return 0;
}

double power(double n, int p) {
    double result = 1;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}