#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, minnum;

    cout << "Enter the First Number : ";
    cin >> num1;
    cout << "Enter the Second Number : ";
    cin >> num2;
    cout << "Enter the Third Number : ";
    cin >> num3;

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            minnum = num1;
        }
        else
        {
            minnum = num3;
        }
    }
    else
    {
        if (num2 < num3)
        {
            minnum = num2;
        }
        else
        {
            minnum = num3;
        }
    }

    cout << "Minimum Number is : " << minnum;
}