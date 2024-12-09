#include <iostream>
using namespace std;

int main () {
    int marks;
    char grad;

    cout << "Enter your Marks : ";
    cin >> marks;

    if (marks > 0 && marks <= 100)
    {
        grad = (marks>=90) ? 'A' : (marks>=80) ? 'B' : (marks>=70) ? 'C' : (marks>=60) ? 'D' : (marks>=50) ? 'E' : 'F'; 

        cout << "Your Grad is : " << grad <<". ";
    }
    else
    {
        cout << "Please Enter a Marks between 0 to 100";
    }
    

    switch (grad)
    {
    case 'A':
        cout << "Excellent work !";
        break;
    case 'B':
        cout << "Well done !";
        break;
    case 'C':
        cout << "Good job !";
        break;
    case 'D':
        cout << "You passed !";
        break;
    case 'E':
        cout << "You passed, but you could do better !";
        break;
    case 'F':
        cout << "Sorry, you failed !";
        break;
    default:
        break;
    }


    if (grad == 'A' || grad == 'B' || grad == 'C' || grad == 'D' || grad == 'E')
    {
        cout << " Congratulations! You are eligible for the next level.";
    }
    else
    {   
        cout << " Please try again next time.";
    }
    
}