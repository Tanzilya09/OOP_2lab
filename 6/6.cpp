#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

long time_to_secs(const Time& t);
Time secs_to_time(long total_seconds);

int main() {
    setlocale(LC_ALL, "rus");
    Time t1, t2, sumTime;
    char choice;
    bool r=true,r2=true;
    while (r) {
        cout << "Введите первое время (часы, минуты, секунды): ";
        cin >> t1.hours >> t1.minutes >> t1.seconds;  
        if (t1.hours < 0 || t1.hours > 24 || t1.minutes < 0 || t1.minutes >= 60 || t1.seconds < 0 || t1.seconds >= 60) {
            r = true;
            cout << "Ошибка: некорректное время!" << endl;
        }
        else { r = false; }
    }
    while (r2) { 
        cout << "Введите второе время (часы, минуты, секунды): ";
        cin >> t2.hours >> t2.minutes >> t2.seconds;
        if (t2.hours < 0 || t2.hours > 24 || t2.minutes < 0 || t2.minutes >= 60 || t2.seconds < 0 || t2.seconds >= 60) {
            r2 = true; 
            cout << "Ошибка: некорректное время!" << endl;
        }
        else { r2 = false; } 
    }
    long totalSeconds = time_to_secs(t1) + time_to_secs(t2);
    sumTime = secs_to_time(totalSeconds);

    cout << "Сумма времени: " << sumTime.hours << " часов, "
        << sumTime.minutes << " минут, " << sumTime.seconds << " секунд" << endl;

    return 0;
}
long time_to_secs(const Time& t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

Time secs_to_time(long total_seconds) {
    Time t;
    t.hours = total_seconds / 3600;
    total_seconds %= 3600;
    t.minutes = total_seconds / 60;
    t.seconds = total_seconds % 60;
    return t;
}