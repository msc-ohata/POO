#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, x1, x2, delta;

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;

    delta = pow(b, 2) - 4 * a * c;

    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        cout << "As raizes da equacao sao: " << x1 << " e " << x2 << endl;
    }
    else {
        cout << "A equacao nao tem raizes reais." << endl;
    }

    return 0;
}

