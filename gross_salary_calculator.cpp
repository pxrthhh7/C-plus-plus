#include <iostream>
using namespace std;

int main() {
    double BS , HRA , DA , TA , GS;

    cout << "Enter Base Salary : ";
    cin >> BS;
    cout << "Enter HRA percentage : ";
    cin >> HRA;
    cout << "Enter DA percentage : ";
    cin >> DA;
    cout << "Enter TA percentage : ";
    cin >> TA;

    GS = BS + (BS * HRA / 100) + (BS * DA / 100) + (BS * TA / 100); 

    cout << "Gross Salary : Rs. " << GS;
}