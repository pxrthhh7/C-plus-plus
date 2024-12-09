#include <iostream> 
using namespace std;

int main() {
    int a,b;

    cout << "Enter the value of First Number : ";
    cin >> a;

    cout << "Enter the value of Second Number : ";
    cin >> b;

    if (a < b)
    {
        cout << "The Minimum value is: " << a;
    }
    else {
        cout << "The Minimum value is : " << b;
    }
    
}