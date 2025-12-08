// conversion and casting of data types in c++
#include<iostream>
using namespace std;
int main(){
    // Implicit type casting
    int myInt = 9;
    double myDouble = myInt; // Automatic conversion from int to double
    cout << "Implicit Type Casting:" << endl;
    cout << "Integer: " << myInt << endl;
    cout << "Converted to Double: " << myDouble << endl;

    // Explicit type casting
    double anotherDouble = 9.78;
    int anotherInt = static_cast<int>(anotherDouble); // Manual conversion from double to int
    cout << "\nExplicit Type Casting:" << endl;
    cout << "Double: " << anotherDouble << endl;
    cout << "Converted to Integer: " << anotherInt << endl;

    // C-style casting
    float myFloat = 5.67f;
    int floatToInt = (int)myFloat; // Manual conversion using C-style cast
    cout << "\nC-Style Type Casting:" << endl;
    cout << "Float: " << myFloat << endl;
    cout << "Converted to Integer: " << floatToInt << endl;

    return 0;
}
// Diffrerence between implicit and explicit type casting
/*
1. Implicit Type Casting:
   - Also known as automatic type conversion.
   - Performed by the compiler without any user intervention.
   - Happens when a value of one data type is assigned to a variable of another data type, and the conversion is safe (e.g., int to double).
   - Example: 
       int myInt = 9;
       double myDouble = myInt; // Implicitly converts int to double
2. Explicit Type Casting:
   - Also known as manual type conversion.
   - Performed by the programmer using casting operators.
   - Used when converting between incompatible data types or when precision loss may occur (e.g., double to int).
   - Example:
       double myDouble = 9.78;
       int myInt = static_cast<int>(myDouble); // Explicitly converts double to int
*/
// Note: C-style casting is another form of explicit casting but is generally discouraged in favor of C++ style casts like static_cast, dynamic_cast, const_cast, and reinterpret_cast for better type safety and clarity.