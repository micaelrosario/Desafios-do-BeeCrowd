#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int r;
    cin >> r;
    double volume = (4.0/3) * 3.14159 * pow(r,3);
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;
	return 0;
}