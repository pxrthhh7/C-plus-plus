#include <iostream>
using namespace std;

int main () {
    int marks;
    char grad;

    cout << "Enter your Marks : ";
    cin >> marks;

    if (marks > 0 || marks < 100)
    {
        grad = (marks>=90) ? 'A' : (marks>=80) ? 'B' : (marks>=70) ? 'C' : (marks>=60) ? 'D' : (marks>=50) ? 'E' : 'F'; 
    }
    else
    {
        cout << "Please Enter a Marks between 0 to 100";
    }

    
    
    
      
}