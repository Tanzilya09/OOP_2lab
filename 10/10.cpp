#include <iostream>
using namespace std;

void countCalls();

int main() {
    setlocale(LC_ALL, "rus"); 
    for (int i = 0; i < 10; i++) {
        countCalls(); 
    }
    return 0;
}
void countCalls() {
    static int count = 0;
    count++;
    cout << "Функция вызвана " << count << " раз(а)." << endl;
}