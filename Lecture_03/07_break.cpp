// Break in for Loop Example
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Printing numbers from 1 to " << n << ", but stopping if we reach 5:" << endl;
    for(int i = 1; i <= n; i++){
        if(i == 5){
            cout << "Reached 5, breaking the loop." << endl;
            break; // Exit the loop when i is 5
        }
        cout << i << " ";
    }
    cout << endl;

    return 0;
}