// Function in memory

// Stack : dynamic memory
// Heap :  static memory
#include <iostream>
using namespace std;

// Description of Pass by Value:
// Pass by value is a method of passing arguments to a function where a copy of the actual value is made and passed to the function.
// Changes made to the parameter inside the function do not affect the original variable outside the function.
// This is the default way in C++ for passing primitive data types like int, float, etc.

void fun()
{
    int x = 25; // function store in stack frame 2
}

int sum(int a, int b)
{
    int sum = a + b;
    cout << " Pass by value : " << sum << endl;
    return sum;
}

int main()
{
    // cout << x << endl;      => cannot access
    int x = 20; // store in stack frame 1

    int a = 20, b = 30;
    sum(a, b);
}
// after accessing function call it gets remove from stack
// return statement is last statement