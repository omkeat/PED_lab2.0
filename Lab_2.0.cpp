#include <iostream>
#include <cmath> 

using namespace std;

int main() {

    double m, n;
    cout << "Введіть значення m: ";
    cin >> m;
    cout << "Введіть значення n: ";
    cin >> n;

    if (m <= 0 || n <= 0) {
        cout << "Значення m та n повинні бути більшими за 0!" << endl;
        return 1; 
    }

    double z1 = ((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) /
                (sqrt(pow(m, 3) * n) + n * m + pow(m, 2) - m);

    double z2 = (sqrt(m) - sqrt(n)) / m;

    cout << "Ось ваш результат!:" << endl;
    cout << "Значення z1: " << z1 << endl;
    cout << "Значення z2: " << z2 << endl;

    return 0;
}
