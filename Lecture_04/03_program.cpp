#include<iostream>
using namespace std;
int main(){

// Example 1 : Inverted triangle pattern
    int l=4;
    for(int i=0;i<l;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout<< "  " ;
        }
        //numbers
        for(int j=0;j<l-i;j++){
            cout<< (i+1) <<" " ;
        }
        cout<< endl;
    }

// Example 2 : Homework
    int m = 4;
    char ch = 'A';
    for(int i=0; i<m; i++){
        for(int j=0;j<i;j++){
            cout << "  ";
        }
        for(int j=0;j<m-i;j++){
            cout << ch << " ";
        }
        cout << endl;
        ch += 1;
    }

// Example 3 : Pyramid pattern
    int n= 4;
    for(int i=0; i<n ; i++){
        for(int j=0; j<n-i -1; j++){
            cout << "  ";
        }
        for(int j=0;j<i+1;j++){
            cout << j+1<< " ";
        }
        for(int j=0; j<i; j++){
            cout << j +1<< " ";
        }
        cout << endl ;
    }

// Example 4 : Hollow Diamond Pattern

    // TOP
    for(int i=0;i<n ;i++){
        for(int j=0;j<n-i-1;j++){
            cout << "  ";
        }
        cout << "* ";

        if(i!=0){
            for(int j=0;j<2*i-1;j++){
                cout <<"  ";
            }
            cout << "* ";
        }
        
        cout << endl;
    }
    // BOTTOM
    for(int i=0;i<n-1; i++){
        for(int j=0;j<i+1;j++){
            cout << "  ";
        }
        cout << "* ";

        if(i != n-2){
            for(int j=0; j< 2*(n-i)-5;j++){
                cout << "  ";
            }
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}