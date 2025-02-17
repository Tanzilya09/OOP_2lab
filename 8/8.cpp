#include <iostream>
using namespace std;

void swap(int& a, int& b);

int main() {
    setlocale(LC_ALL, "rus");
    int num1, num2;

    cout << "Введите два числа: ";
    cin >> num1 >> num2;

    swap(num1, num2);

    cout << "После обмена: " << num1 << " " << num2 << endl; 

    return 0;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}