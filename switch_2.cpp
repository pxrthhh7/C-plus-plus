#include <iostream>
using namespace std;

int main() {
    int x,y;
    char user;

    cout << "Enter The value of X : ";
    cin >> x;
    cout << "Enter The value of Y : ";
    cin >> y;
    cout <<  "Enter the Operation, do You want to Perform : ";
    cin >> user;

    switch (user)
    {
    case '+':
            cout << " X + Y = " << x+y;
        break;
    case '-':
            cout << " X - Y = " << x-y;
        break;
    case '*':
            cout << " X * Y = " << x*y;
        break;
    case '/':
            cout << " X / Y = " << x/y;
        break;

    default:
        cout << "Invelid Input !!!";
        break;
    }
}