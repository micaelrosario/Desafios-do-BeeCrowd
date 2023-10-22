#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    // Delta(🔺) = b² - 4ac
    double delta = pow(b, 2) - 4 * a * c;
    //cout << "DELTA: " << delta << endl;
    // Raízes da minha equação: x = -b ± √delta / 2a
    if (a == 0 || delta < 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout  << fixed << setprecision(5);
        cout << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl;
    }
    return 0;
}