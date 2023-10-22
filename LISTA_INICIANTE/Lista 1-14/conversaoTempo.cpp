#include <iostream>
 
using namespace std;
 
int main() {
    int n, hour, minute, second, resto;
    cin >> n;
    // hour - dividir segundos por 3600
    hour = n / 3600;
    // minuto - dividir resto por 60
    resto = n%3600;
    minute = resto/60;
    //segundos - resto
    second = resto%60;

    cout << hour << ":" << minute << ":" << second << endl;
    return 0;
}