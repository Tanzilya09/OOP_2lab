#include <iostream>
using namespace std;

double power(double n, int p = 2);
char power(char n, int p = 2);
int power(int n, int p = 2);
long power(long n, int p = 2);
float power(float n, int p = 2);

int main() {
    setlocale(LC_ALL, "rus");
    cout << "power(2.5) = " << power(2.5) << endl;
    cout << "power(3) = " << power(3) << endl;
    cout << "power(4L, 3) = " << power(4L, 3) << endl;   
    cout << "power(5.5f, 3) = " << power(5.5f, 3) << endl;
    cout << "power('A', 2) = " << (int)power('A', 2) << endl; 

    return 0;
}

double power(double n, int p ) {
    double result = 1;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

char power(char n, int p ) {
    char result = 1;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

int power(int n, int p ) {
    int result = 1;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

long power(long n, int p ) {
    long result = 1;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

float power(float n, int p) {
    float result = 1;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}