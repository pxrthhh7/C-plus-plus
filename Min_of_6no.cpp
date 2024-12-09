#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, num6, minnum;

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

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            if (num1 < num4)
            {
                if (num1 < num5)
                {
                    if (num1 < num6)
                    {
                        minnum = num1;
                    }
                    else
                    {
                        minnum = num6;
                    }
                }
                else
                {
                    if (num5 < num6)
                    {
                        minnum = num5;
                    }
                    else
                    {
                        minnum = num6;
                    }
                }
            }
            else
            {
                if (num4 < num5)
                {
                    if (num4 < num6)
                    {
                        minnum = num4;
                    }
                    else
                    {
                        minnum = num6;
                    }
                }
                else
                {
                    if (num5 < num6)
                    {
                        minnum = num5;
                    }
                    else
                    {
                        minnum = num6;
                    }
                }
            }
        }
        else {
            if (num3 < num4)
            {
                if (num3 < num5)
                {
                    if (num3 < num6)
                    {
                        minnum = num3;
                    }
                    else
                    {
                        minnum = num6;
                    }
                    
                    
                }
                else
                {
                    if (num5 < num6)
                    {
                        minnum = num5;
                    }
                    else {
                        minnum = num6;
                    }
                    
                }
                
                
            }
            else
            {
                if (num4 < num5)
                {
                    if (num4 < num6)
                    {
                        minnum = num4;
                    }
                    else
                    {
                        minnum = num6;
                    }  
                    
                }
                else
                {
                    if (num5 < num6)
                    {
                        minnum = num5;
                    }
                    else
                    {
                        minnum = num6;
                    }
                     
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
                    if (num2 < num6)
                    {
                        minnum = num2;
                    }
                    else
                    {
                        minnum = num6;
                    }
                    
                }
                else
                {
                    if (num5 < num6)
                    {
                        minnum = num5;
                    }
                    else
                    {
                        minnum = num6;
                    }
                    
                }
                 
            }
            else
            {
                if (num4 < num5)
                {
                    if (num4 < num6)
                    {
                        minnum = num4;
                    }
                    else
                    {
                        minnum = num6;
                    }
                    
                }
                else
                {
                    if (num5 < num6)
                    {
                        minnum = num5;
                    }
                    else
                    {
                        minnum = num6;
                    }
                     
                }
                
                
            }
            
        }
        else 
        {
            if (num3 < num4)
            {
                if (num3 < num5)
                {
                    if (num3 < num6)
                    {
                        minnum = num3;
                    }
                    else 
                    {
                        minnum = num6;
                    }
                    
                }
                else 
                {
                    if (num5 < num6)
                    {
                        minnum = num5;
                    }
                    else
                    {
                        minnum = num6;
                    }
                    
                }
      
            }
            else
            {
               if (num4 < num5)
               {
                    if (num4 < num6)
                    {
                        minnum = num4;
                    }
                    else 
                    {
                        minnum = num6;
                    }
                    
               }
               else
               {
                    if (num5 < num6)
                    {
                        minnum = num5;
                    }
                    else
                    {
                        minnum = num6;
                    }
                    
               }
               
                            
            }
            
            
        }
        
    }

    cout << "Min Value is : " << minnum ;
    
}