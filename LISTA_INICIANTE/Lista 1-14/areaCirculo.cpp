#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double r, area, n=3.14159;
    cout << "";
    cin >> r;

    area = n*(r*r);
    cout << fixed << setprecision(4);
    cout << "A="<< area << endl;
    return 0;
}