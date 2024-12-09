#include <iostream>
using namespace std;

int main() {
    float num;

    cout << "Enter the number to check number is neutral or not : ";
    cin >> num;
    

    if (num > 0)
    {
        cout << "The Number " << num << " is Positive Number.";
    }
    else if (num < 0)
    {
        cout << "The Number " << num << " is Negative Number.";
    }
    else {
        cout << "The Number " << num << " is Neutral.";
    }
    
    
}