#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

Distance maxDistance(const Distance& d1, const Distance& d2);

int main() {
    setlocale(LC_ALL, "rus");
    Distance d1, d2;

    cout << "Введите первое расстояние (футы и дюймы): ";
    cin >> d1.feet >> d1.inches;
    cout << "Введите второе расстояние (футы и дюймы): ";
    cin >> d2.feet >> d2.inches;
    Distance maxDist = maxDistance(d1, d2);
    cout << "Наибольшее расстояние: " << maxDist.feet << " футов " << maxDist.inches << " дюймов" << endl;

    return 0;
}

Distance maxDistance(const Distance& d1, const Distance& d2) {
    float total1 = d1.feet * 12 + d1.inches;
    float total2 = d2.feet * 12 + d2.inches;

    return (total1 > total2) ? d1 : d2;
}