#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cod, qtd;
    cin >> cod >> qtd;

    switch (cod){
        case 1:
            cout << fixed << setprecision(2);
            cout << "Total: R$ " << qtd*4.00 << endl;break;
        case 2:
            cout << fixed << setprecision(2);
            cout << "Total: R$ " << qtd*4.50 << endl;break;
        case 3:
            cout << fixed << setprecision(2);
            cout << "Total: R$ " << qtd*5.00 << endl;break;
        case 4:
            cout << fixed << setprecision(2);
            cout << "Total: R$ " << qtd*2.00 << endl;break;
        case 5:
            cout << fixed << setprecision(2);
            cout << "Total: R$ " << qtd*1.50 << endl;break;
    }
    
    return 0;
}