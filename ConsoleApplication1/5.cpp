#include <iostream>
using namespace std;

long hms_to_secs(int hours, int minutes, int seconds);

int main() {
    setlocale(LC_ALL, "rus");
    int hours, minutes, seconds;
    char choice;

    do {
        cout << "Введите часы, минуты и секунды: ";
        cin >> hours >> minutes >> seconds;
        if (hours < 0 || hours > 24 || minutes < 0 || minutes >= 60 || seconds < 0 || seconds >= 60) {
            cout << "Ошибка: некорректное время!" << endl;
            break;
        }
        long total_seconds = hms_to_secs(hours, minutes, seconds);
        cout << "Общее количество секунд: " << total_seconds << endl;
        cout << "Хотите ввести еще одно время? (1=да/0=нет): ";
        cin >> choice;

    } while (choice == '1');

    return 0;
}
long hms_to_secs(int hours, int minutes, int seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}
