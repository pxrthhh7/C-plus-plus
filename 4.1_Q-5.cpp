#include <iostream>
using namespace std;


int main() {
    int a,b;

    cout << "Enter the value of A : ";
    cin >> a;
    cout << "Enter the value of B : ";
    cin >> b;

    cout << "---------- After Swapping ----------" << endl;

    a = b - a;
    b = b - a;
    a = a + b;

    cout << "Value of A is : " << a << endl;
    cout << "Value of B is : " << b << endl;
}