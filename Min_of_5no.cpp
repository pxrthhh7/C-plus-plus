#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, minnum;

    cout << "Enter the First Number : ";
    cin >> num1;
    cout << "Enter the Second Number : ";
    cin >> num2;
    cout << "Enter the Third Number : ";
    cin >> num3;
    cout << "Enter the Forth Number : ";
    cin >> num4;
    cout << "Enter the Fifth Number : ";
    cin >> num5;

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            if (num1 < num4)
            {
                if (num1 < num5)
                {
                    minnum = num1;
                }
                else
                {
                    minnum = num5;
                }
            }
            else
            {
                if (num4 < num5)
                {
                    minnum = num4;
                }
                else
                {
                    minnum = num5;
                }
            }
        }
        else
        {
            if (num3 < num4)
            {
                if (num3 < num5)
                {
                    minnum = num3;
                }
                else
                {
                    minnum = num5;
                }  
            }
            else
            {
                if (num4 < num5)
                {
                    minnum = num4;
                }
                else
                {
                    minnum = num5;
                }
            }
        }
    }
    else
    {
        if (num2 < num3)
        {
            if (num2 < num4)
            {
                if (num2 < num5)
                {
                    minnum = num2;
                } 
                else {
                    minnum = num5;
                }  
            }
            else
            {
                if (num4 < num5)
                {
                    minnum = num4;
                }
                else {
                    minnum = num5;
                }
                
            }
        }
        else
        {
            if (num3 < num4)
            {
                if (num3 < num5)
                {
                    minnum = num3;
                }
                else
                {
                    minnum = num5;
                }
            }
            else
            {
                if (num4 < num5)
                {
                    minnum = num4;
                }
                else
                {
                    minnum = num5;
                }   
            }
        }
    }

    cout << "Minimum Number is : " << minnum;
}