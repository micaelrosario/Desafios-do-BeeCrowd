#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x;
    float y, consumo;

    cin >> x >> y;
    consumo = x/y;
    cout << fixed << setprecision(3);
    cout << consumo << " km/l" << endl;
    return 0 ;
}