#include <iostream>

using namespace std;

int main() {
    int numero;
    cin >> numero;
    cout << numero << endl;
    if (numero > 0 && numero < 1000000){
        // Vetor - Com 7 valores pré-definidos
        int valores[7] = {100, 50, 20, 10, 5, 2, 1};
        for (int i = 0; i < 7; i++){
            int valor = numero/valores[i];
            numero = numero%valores[i]; // Modificando a variavel numero a cada interação
            cout << valor << " nota(s) de R$ " << valores[i] << ",00" << endl; // imprimindo na tela
            
        }
    }
    return 0;
}
