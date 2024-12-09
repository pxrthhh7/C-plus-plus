#include <iostream>
using namespace std;

int main() {
    int x,y,z;

    cout << "Enter the Value of X : ";
    cin >> x;
    cout << "Enter the Value of Y : ";
    cin >> y;

    z = (x*x*x) + 3*(x*x)*y + 3*x*(y*y) + (y*y*y);

    cout << "Value of Z is : " << z;
}