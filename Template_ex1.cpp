#include <iostream>
using namespace std; 

template<typename T>

T smaller(T first, T second){
    if(first < second)
        return first;
    else
        return second;
}

int main() {
    int a = 10, b = 20;
    double x = 5.5, y = 2.3;

    cout << "Smaller of " << a << " and " << b << " is " << smaller(a, b) << endl;
    cout << "Smaller of " << x << " and " << y << " is " << smaller(x, y) << endl;

    return 0;
}