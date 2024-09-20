#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter yor number";
    cin >> grade;

    if (grade <= 100 && grade >= 60)
    {
        cout << "Your grade is A";
    }
    else if (grade <= 59 && grade >= 40)
    {
        cout << "Your grade is B";
    }
    else if (grade <= 39 && grade >= 30)
    {
        cout << "Your grade is C";
    }
    else if (grade <= 29 && grade >= 0)
    {
        cout << "Your grade is D";
    }
    else
    {
        cout << "Enter a vailid number";
    }
}