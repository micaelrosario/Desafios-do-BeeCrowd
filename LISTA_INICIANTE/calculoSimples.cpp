#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int code1, qtdPecas1;float valor1;
    int code2, qtdPecas2;float valor2;
    float valor;

    cin >> code1 >> qtdPecas1 >> valor1;
    cin >> code2 >> qtdPecas2 >> valor2;

    valor = (valor1 * qtdPecas1) + (valor2 * qtdPecas2);
    cout << fixed << setprecision(2) ;
    cout << "VALOR A PAGAR: R$ " << valor << endl;
    return 0;
} 