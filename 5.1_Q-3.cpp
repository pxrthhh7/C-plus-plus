#include <iostream>
using namespace std;

int main() {
    float s1,s2,s3;

    cout << "Enter the Marks of Subject-1 : ";
    cin >> s1;
    cout << "Enter the Marks of Subject-2 : ";
    cin >> s2;
    cout << "Enter the Marks of Subject-3 : ";
    cin >> s3;

    if (s1 < 0 || s1 > 100 || s2 < 0 || s2 > 100 || s3 < 0 || s3 > 100)
    {
        cout << "Marks Should be between 0 and 100";
    }
    else {
        
        float avg = (s1+s2+s3) / 3;

        cout << "The average mark is : " << avg;
    }
    
}