// do while loop example in C++
#include <iostream>
using namespace std;
int main(){
    int count = 1;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Printing numbers from 1 to " << n << " using do-while loop:" << endl;
    do{
        cout << count << " ";
        count++;
    } while(count <= n);
    cout << endl;

    return 0;
}
// difference between while and do-while loop is that
// while loop checks the condition first then executes the block of code
// do-while loop executes the block of code first then checks the condition
// hence do-while loop will always execute the block of code at least once
// Example:
// If user enters 0, while loop will not execute the block of code
// but do-while loop will execute the block of code once
// #include <iostream>
// using namespace std;
// int main(){
//     int count = 1;
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//   cout << "Using while loop:" << endl;
//     while(count <= n){
//         cout << count << " ";
//         count++;
//    }
//    cout << endl;
//    count = 1; // reset count for do-while loop
//    cout << "Using do-while loop:" << endl;
//    do{
//        cout << count << " ";
//        count++;
//    } while(count <= n);
//    cout << endl;
//    return 0;
// }

