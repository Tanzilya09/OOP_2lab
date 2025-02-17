#include <iostream>
using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

Fraction fadd(const Fraction& f1, const Fraction& f2); 
Fraction fsub(const Fraction& f1, const Fraction& f2); 
Fraction fmul(const Fraction& f1, const Fraction& f2);
Fraction fdiv(const Fraction& f1, const Fraction& f2);
void printFraction(const Fraction& f);

int main() {
    setlocale(LC_ALL, "rus"); 
    Fraction f1, f2, result;
    char operation;

    cout << "Введите первую дробь (числитель и знаменатель): ";
    cin >> f1.numerator >> f1.denominator;
    cout << "Введите вторую дробь (числитель и знаменатель): ";
    cin >> f2.numerator >> f2.denominator;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
    case '+': result = fadd(f1, f2); break;
    case '-': result = fsub(f1, f2); break;
    case '*': result = fmul(f1, f2); break;
    case '/': result = fdiv(f1, f2); break;
    default:
        cout << "Неверная операция!" << endl;
        return 1;
    }

    cout << "Результат: ";
    printFraction(result);

    return 0;
}
Fraction fadd(const Fraction& f1, const Fraction& f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

Fraction fsub(const Fraction& f1, const Fraction& f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

Fraction fmul(const Fraction& f1, const Fraction& f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

Fraction fdiv(const Fraction& f1, const Fraction& f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    return result;
}
void printFraction(const Fraction& f) {
    cout << f.numerator << "/" << f.denominator << endl;
}