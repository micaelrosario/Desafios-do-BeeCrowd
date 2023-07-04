#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    float x1, y1, x2, y2, distancia;
    std::cin >> x1 >> y1 >> x2 >> y2;

    float x = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    distancia = std::sqrt(x);

    std::cout << std::fixed << std::setprecision(4);
    std::cout << distancia << std::endl;

    return 0;
}
