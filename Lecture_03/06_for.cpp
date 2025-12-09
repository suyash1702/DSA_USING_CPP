// for loop example in C++
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Printing numbers from 1 to " << n << " using for loop:" << endl;
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}