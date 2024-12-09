#include <iostream>
using namespace std;

int main (){
    int num1,num2,num3;

    cout << "Enter the First Value : ";
    cin >> num1; 
    cout << "Enter the Second Value : ";
    cin >> num2; 
    cout << "Enter the Third Value : ";
    cin >> num3; 

    (num1 < num2) ? (num1 < num3) ? cout << "Min Value is : " << num1 : cout << "Min Value is : " << num3 : (num2 < num3) ? cout << "Minium Value is : " << num2 : cout << "Minium Value is : " << num3;
}