#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, c = 15;

    if (a > b || b > a)
    {
        cout << "Hii";
    }
    else if (b > a || c > a)
    {
        cout << "I am ?";
    }
    else if (a > 10 || b < 20)
    {
        cout << "My name is nasir ali";
    }
    else
    {
        cout << "Error!";
    }
    return 0;
}