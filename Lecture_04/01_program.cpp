// Square pattern
#include<iostream>
using namespace std;

int main(){

    // Example 1
    int n = 4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j << " ";
        }
        cout<<endl;
    }

    //Example 2
    int m = 3;
    int num = 1;
    for(int i=0;i<= m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout << num <<" ";
            num++;
        }
        cout << endl;
    }

    // Example 3
    int o = 3;
    char ch = 'A';
    for(int i=0;i<o;i++){
        for(int j=0; j<o; j++){
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}
