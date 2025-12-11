// Triangle pattern

#include<iostream>
using namespace std;

int main(){

//  Example 1
    int l = 4;
    for(int i=0;i<= l-1; i++){
        for(int j=0;j<i+1;j++){
            cout << "* ";
        }
        cout << endl;
    }

//  Example 2
    int m =4;
    for(int i=0;i<m ; i++){
        for(int j=0;j<i+1;j++){
            cout << i+1 <<" ";
        }
        cout<< endl;
    }

//  Example 3
    int n = 5;
    char ch = 'A';
    for(int i = 0; i<n ; i++){
        for (int j=0;j<i+1;j++){
            cout<<ch <<" ";
        }
        ch = ch +1;
        cout << endl;
    }

//  Example 4
    int p = 4;
    for( int i=0; i<p; i++){
        for(int j=0; j<i+1 ; j++){
            cout << j+1;
        }
        cout << endl;
    }

//  Example 5
    int q =4;
    for(int i=0; i < q; i++){
        for(int j=i+1; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }

//  Example 6 : Floyd's triangle pattern
    int r = 5;
    int num = 1;
    for (int i=0;i<r; i++){
        for(int j=0;j<i+1;j++){
            cout << num << "    ";
            num++;
        }
        cout << endl;
    }

// Example 7 : Homework
    int s = 5;
    char cha = 'A';
    for (int i=0;i<s; i++){
        for(int j=0;j<i+1;j++){
            cout << cha << "    ";
            cha+=1;
        }
        cout << endl;
    }

    return 0;

}