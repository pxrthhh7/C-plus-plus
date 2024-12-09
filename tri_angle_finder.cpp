#include <iostream>
using namespace std;

int main() {
    int a,b,c;

    cout << "Enter the First angle of Triangle : ";
    cin >> a;
    cout << "Enter the Second angle of Triangle : ";
    cin >> b;

    c = 180 - (a+b);

    cout << "Third angle of Triangle is : " << c;

}