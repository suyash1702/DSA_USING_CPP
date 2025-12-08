#include<iostream>
using namespace std;
int main(){
    // Taking input from the user
    int age;
    double height;
    char grade;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height (in meters): ";
    cin >> height;
    cout << "Enter your grade (A-F): ";
    cin >> grade;
    // Displaying the input values
    cout << "You entered:\n";
    cout << "Age: " << age << "\n";
    cout << "Height: " << height << " meters\n";
    cout << "Grade: " << grade << "\n";
    return 0;
    
}