// Unary operators in C++
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << "Initial value of a: " << a << endl;

    // Unary plus operator
    int b = +a;
    cout << "Using unary plus operator: " << b << endl;

    // Unary minus operator
    int c = -a;
    cout << "Using unary minus operator: " << c << endl;

    // Increment operator
    a++;
    cout << "After incrementing, value of a: " << a << endl;

    // Decrement operator
    a--;
    cout << "After decrementing, value of a: " << a << endl;

    return 0;
}
// a++ : First use the value of a, then increment it i.e; postfix increment
// ++a : First increment the value of a, then use it i.e; prefix increment
// Similarly for -- operator
// a-- : First use the value of a, then decrement it i.e; postfix decrement
// --a : First decrement the value of a, then use it i.e; prefix decrement