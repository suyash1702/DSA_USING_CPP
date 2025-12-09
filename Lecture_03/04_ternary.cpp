// Ternary statement example in C++
#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Using ternary operator to check if the number is even or odd
    string result = (number % 2 == 0) ? "even" : "odd";
    cout << number << " is " << result << "." << endl;

    return 0;
}

// Alternative way to directly print the result using ternary operator
// #include <iostream>
// using namespace std;
// int main(){
//     int number;
//     cout << "Enter an integer: ";
//     cin >> number;
//
//     cout << number << " is " << ((number % 2 == 0) ? "even" : "odd") << "." << endl;
//   return 0;
// }
