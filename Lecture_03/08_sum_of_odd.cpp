// sum of odd numbers from 1 to n
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){ // Check if the number is odd
            sum += i;   // Add odd number to sum
        }
    }

    cout << "The sum of odd numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}