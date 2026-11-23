// Лабораторна робота № 5.1
// Варіант 4
#include <iostream>
#include <cmath>

using namespace std;

// Прототип допоміжної функції k(x, y)
double k(const double x, const double y);

int main()
{
    double p, q; // вхідні дійсні змінні

    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    // Обчислення основного виразу за допомогою викликів функції k(x, y)
    double c = (pow(k(1 + p, q * q), 2) - k(q * p, 1)) / (1 + k(p * p, q));

    cout << "c = " << c << endl;

    return 0;
}

// Визначення допоміжної функції k(x, y)
double k(const double x, const double y)
{
    return (sin(x) / (y * y)) + (cos(y) / (x * x));
}