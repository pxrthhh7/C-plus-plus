#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3,num4;

    cout << "Enter the First Value : ";
    cin >> num1;
    cout << "Enter the Second Value : ";
    cin >> num2;
    cout << "Enter the Third Value : ";
    cin >> num3;
    cout << "Enter the Forth Value : ";
    cin >> num4;

    (num1 < num2) ? (num1 < num3) ? (num1 < num4) ? cout << "Min Value is : " << num1 : cout << "Min Value is : " << num4 : (num3 < num4) ? cout << "Min Value is : " << num3 : cout << "Min Value is : " << num4 : (num2 < num3) ? (num2 < num4) ? cout << "Min Value is : " << num2 : cout << "Min Value is : " << num4 : (num3 < num4) ? cout << "Min Vlaue is : " << num3 : cout << "Min Value is : " << num4;
}