// while loop example in C++
#include <iostream>
using namespace std;
int main(){
    int count = 1;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Printing numbers from 1 to " << n << " using while loop:" << endl;
    while(count <= n){
        cout << count << " ";
        count++;
    }
    cout << endl;

    return 0;
}