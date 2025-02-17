#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void swap(Time& t1, Time& t2);

int main() { 
    setlocale(LC_ALL, "rus");
    Time time1, time2; 
    bool r = true, r2 = true;
    while (r) {
        cout << "Введите первое время (часы, минуты, секунды): ";
        cin >> time1.hours >> time1.minutes >> time1.seconds;
        if (time1.hours < 0 || time1.hours > 24 || time1.minutes < 0 || time1.minutes >= 60 || time1.seconds < 0 || time1.seconds >= 60) {
            r = true;
            cout << "Ошибка: некорректное время!" << endl;
        }
        else { r = false; }
    }
    while (r2) {
        cout << "Введите второе время (часы, минуты, секунды): ";
        cin >> time2.hours >> time2.minutes >> time2.seconds;
        if (time2.hours < 0 || time2.hours > 24 || time2.minutes < 0 || time2.minutes >= 60 || time2.seconds < 0 || time2.seconds >= 60) {
            r2 = true;
            cout << "Ошибка: некорректное время!" << endl;
        }
        else { r2 = false; }
    }
    swap(time1, time2);
    cout << "После обмена:\n";
    cout << "Первое время: " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl;
    cout << "Второе время: " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;

    return 0;
}
void swap(Time& t1, Time& t2) {
    Time temp = t1;
    t1 = t2;
    t2 = temp;
}
