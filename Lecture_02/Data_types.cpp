#include<iostream>
using namespace std;

// Different Data Types in C++
int main(){
    // Integer data type
    int myInt = 10;
    cout << "Integer: " << myInt << endl;

    // Floating point data type
    float myFloat = 5.75f;
    double myDouble = 19.99;
    cout << "Float: " << myFloat << endl;
    cout << "Double: " << myDouble << endl;

    // Character data type
    char myChar = 'A';
    cout << "Character: " << myChar << endl;

    // Boolean data type   where true = 1 and false = 0
    bool myBool = true;
    cout << "Boolean: " << myBool << endl;

    // String data type
    string myString = "Hello, C++!";
    cout << "String: " << myString << endl;

    return 0;
}
// space taken by data types
/*
Data Type     Size (in bytes)
int           4
float         4
double        8
char          1
bool          1
string        Varies (depends on the length of the string)
*/

// alphabets coverted to ascii values
/*
Character     ASCII Value
'A'           65
'B'           66
'C'           67

'a'           97
'b'           98
'c'           99
*/