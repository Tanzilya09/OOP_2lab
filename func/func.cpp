#include <iostream>
using namespace std;
const float PI = 3.14159f;
float circarea(float radius);

int main() {
    setlocale(LC_ALL, "rus"); 
    float radius;

    cout << "Введите радиус круга: ";
    cin >> radius;
    if (radius < 0) {
        cout << "Радиус не может быть отрицательным!" << endl;
        return 1;
    }
    float area = circarea(radius);
    cout << "Площадь круга: " << area << endl;

    return 0;
}
float circarea(float radius) {
    return PI * radius * radius;
}


