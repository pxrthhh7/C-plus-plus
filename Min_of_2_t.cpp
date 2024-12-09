#include <iostream>
using namespace std;

int main () {
    int x,y;

    cout << "Enter First value : ";
    cin >> x;
    cout << "Enter Second value : ";
    cin >> y;

    (x < y) ? cout << "Min value is : " << x  : cout << "Min value is : " << y;
}