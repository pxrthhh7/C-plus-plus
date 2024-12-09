#include <iostream>
using namespace std;

int main () {
    double deg,fa;

    cout << "The Temperature in Celsius is : ";
    cin >> deg;

    fa = (deg * 9/5) + 32;

    cout << "The Temperature in Fahrenheit is : " << fa;
}