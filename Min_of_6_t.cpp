#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3,num4,num5,num6;

    cout << "Enter First Value : ";
    cin >> num1;
    cout << "Enter Second Value : ";
    cin >> num2;
    cout << "Enter Third Value : ";
    cin >> num3;
    cout << "Enter Forth Value : ";
    cin >> num4;
    cout << "Enter Fifth Value : ";
    cin >> num5;
    cout << "Enter Sixth Value : ";
    cin >> num6;

    (num1 < num2) ? 
        (num1 < num3) ? 
            (num1 < num4) ? 
                (num1 < num5) ? 
                    (num1 < num6) ? 
                        cout << "Min Value is : " << num1 
                    : 
                        cout << "Min Value is : " << num6 
                : 
                    (num5 < num6) ? 
                        cout << "Min Value is : " << num5 
                    : 
                        cout << "Min Value is : " << num6 
            : 
                (num4 < num5) ? 
                    (num4 < num6) ?  
                        cout << "Min Value is : " << num4 
                    : 
                        cout << "Min Value is : " << num6 
                : 
                    (num5 < num6) ? 
                        cout << "Min Value is : " << num5 
                    : 
                        cout << "Min Value is : " << num6 
        : 
            (num3 < num4) ?
                (num3 < num5) ? 
                    (num3 < num6) ? 
                        cout << "Min Value is : " << num3 
                    : 
                        cout << "Min Value is : " << num6 
                : 
                    (num5 < num6) ? 
                        cout << "Min Value is : " << num5 
                    : 
                        cout << "Min Value is : " << num6 
            : 
                (num4 < num5) ? 
                    (num4 < num6) ? 
                        cout << "Min Value is : " << num4 
                    : 
                        cout << "Min Value is : " << num6 
                : 
                    (num5 < num6) ? 
                        cout << "Min Value is : " << num5 
                    : 
                        cout << "Min Value is : " << num6 
    :
        (num2 < num3) ? 
            (num2 < num4) ? 
                (num2 < num5) ? 
                    (num2 < num6) ? 
                        cout << "Min Value is : " << num2 
                    : 
                        cout << "Min Value is : " << num6 
                : 
                    (num5 < num6) ? 
                        cout << "Min Value is : " << num5 
                    : 
                        cout << "Min Value is : " << num6 
            : 
                (num4 < num5) ? 
                    (num4 < num6) ? 
                        cout << "Min Value is : " << num4 
                    : 
                        cout << "Min Value is : " << num6 
                : 
                    (num5 < num6) ? 
                        cout << "Min Value is : " << num5
                    :
                        cout << "Min Value is : " << num6  
        :
            (num3 < num4) ? 
                (num3 < num5) ? 
                    (num3 < num6) ? 
                        cout << "Min Value is : " << num3 
                    : 
                        cout << "Min Value is : " << num6 
                : 
                    (num5 < num6) ? 
                        cout << "Min Value is : " << num5 
                    : 
                        cout << "Min Value is : " << num6 
            : 
                (num4 < num5) ? 
                    (num4 < num6) ? 
                        cout << "Min Value is : " << num4 
                    : 
                        cout << "Min Value is : " << num6 
                : 
                    (num5 < num6) ? 
                        cout << "Min Value is : " << num5 
                    : 
                        cout << "Min Value is : " << num6 ;
}