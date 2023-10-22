#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numF, numH;
    float valorH, salario;
    cin >> numF >> numH >> valorH;
    salario = numH*valorH;
    cout << "NUMBER = " << numF << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " <<  salario << endl;
	return 0;
}