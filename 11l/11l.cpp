#include <iostream>
using namespace std;

struct Sterling {
    int pounds;
    int shillings;
    int pence;
};
Sterling getSterling();
Sterling addSterling(const Sterling& s1, const Sterling& s2);
void showSterling(const Sterling& s);

int main() {
    setlocale(LC_ALL, "rus");
    Sterling s1 = getSterling();
    Sterling s2 = getSterling();
    Sterling sum = addSterling(s1, s2);
    showSterling(sum);

    return 0;
}

Sterling getSterling() {
    Sterling s;
    cout << "Введите сумму (фунты, шиллинги, пенсы): ";
    cin >> s.pounds >> s.shillings >> s.pence;
    return s;
}

Sterling addSterling(const Sterling& s1, const Sterling& s2) {
    Sterling sum;

    sum.pounds = s1.pounds + s2.pounds;
    sum.shillings = s1.shillings + s2.shillings;
    sum.pence = s1.pence + s2.pence;

    if (sum.pence >= 12) {
        sum.shillings += sum.pence / 12;
        sum.pence %= 12;
    }
    if (sum.shillings >= 20) {
        sum.pounds += sum.shillings / 20;
        sum.shillings %= 20;
    }

    return sum;
}

void showSterling(const Sterling& s) {
    cout << "Сумма: " << s.pounds << " фунтов, "
        << s.shillings << " шиллингов, "
        << s.pence << " пенсов" << endl;
}