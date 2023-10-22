#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double valor;
    cin >> valor;
    int n = valor * 100;
    
    cout << "NOTAS:" << endl;
    int valores[6] = {10000, 5000, 2000, 1000, 500, 200};
    for (int i = 0; i < 6; i++) {
        int notas = n / valores[i];
        n = n % valores[i];
        cout << notas << " nota(s) de R$ " << fixed << setprecision(2) << valores[i] / 100.0 << endl;
    }
    
    cout << "MOEDAS:" << endl;
    int moedas[6] = {100, 50, 25, 10, 5, 1};
    for (int i = 0; i < 6; i++) {
        int quantidade = n / moedas[i];
        n = n % moedas[i];
        cout << quantidade << " moeda(s) de R$ " << fixed << setprecision(2) << moedas[i] / 100.0 << endl;
    }

    return 0;
}