#include<iostream>
using namespace std;
int main(){
    int n =10;
    int i = 1;
    int sum = 0;
    while( i<= n){
        if(i % 2 != 0){
            sum += i;
        }
        i++;
    }
    cout << "The sum of odd numbers from 1 to " << n << " is: " << sum << endl;

    // for loop for even numbers
    int evenSum = 0;
    for(int j = 1; j <= n; j++){
        if(j % 2 == 0){
            evenSum += j;
        }
    }
    cout << "The sum of even numbers from 1 to " << n << " is: " << evenSum << endl;
}
    