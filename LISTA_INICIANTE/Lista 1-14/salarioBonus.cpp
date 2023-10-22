#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    string vendedor;
    double salariofixo, vendas, totalReceber ;

    cin >> vendedor;
    cin >> salariofixo;
    cin >> vendas;
    totalReceber = salariofixo + vendas*0.15;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " <<totalReceber << endl;

    return 0;
}