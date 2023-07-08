#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int temp, velocity;

    cin >> temp >> velocity;

    double distance = temp * velocity;
    double litros = distance/12;
    cout << fixed << setprecision(3);
    cout << litros << endl;
    return 0 ;
}