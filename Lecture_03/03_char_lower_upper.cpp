#include<iostream>
using namespace std;
int main(){
    char ch;
    cout <<"Enter an character: ";
    cin >> ch;
    if(ch >= 'a' && ch <= 'z'){
        cout << "The character is in lowercase." << endl;
    } else if(ch >= 'A' && ch <= 'Z'){
        cout << "The character is in uppercase." << endl;
    } else {
        cout << "The character is neither lowercase nor uppercase." << endl;
    }
    return 0;
}

// using ascii values
// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout <<"Enter an character: ";
//     cin >> ch;
//     if(ch >= 97 && ch <= 122){
//         cout << "The character is in lowercase." << endl;
//     } else if(ch >= 65 && ch <= 90){
//         cout << "The character is in uppercase." << endl;
//     } else {
//         cout << "The character is neither lowercase nor uppercase." << endl;
//     }
//     return 0;
// }
