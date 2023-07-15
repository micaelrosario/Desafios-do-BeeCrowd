#include <iostream>
 
using namespace std;
 
int main() {
 
    int idade, anos, meses, dias;
    cin >> idade;
    //anos
    anos = idade/365;
    //meses
    float resto = idade%365;
    meses = resto/30;
    //dias
    dias = resto-(meses*30);

    cout << anos  <<" ano(s)" << endl;
    cout << meses  <<" mes(es)" << endl;
    cout << dias  <<" dia(s)" << endl;
 
    return 0;
}