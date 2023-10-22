#include <iostream>

using namespace std;

int main() {
   int a, b, c ;
   cin >> a >> b >> c;

    int a_b = (a+b+abs(a-b))/2;
    
    if (a_b > c){
        cout << a_b << " eh o maior" << endl;
    }else{
        cout << c << " eh o maior" << endl;
    }
    
    return 0;
}