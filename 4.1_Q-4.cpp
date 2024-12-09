#include <iostream>
using namespace std;

int main() {
    int a,b,c;

    cout << "Enter the value of A : ";
    cin >> a;
    cout << "Enter the value of B : ";
    cin >> b;

    cout << "---------- After Swapping ----------" << endl;

    c = a;
    a = b;
    b = c;

    cout << "Value of A : " << a << endl;
    cout << "Value of B : " << b << endl;
}