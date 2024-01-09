#include <bits/stdc++.h>
using namespace std;
void Print(int n){
    // Approach-1
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++)
    //         cout<<char(i+65)<<" ";
    //     cout<<endl;
    // }

    // Approach-2
    char ch;
    for(int i=0;i<n;i++){
        ch = 'A'+i;
        for(int j=0;j<=i;j++)
            cout<<ch<<" ";
        cout<<endl;
    }
}

int main(){
    cout<<"Enter a number: "<<endl;
    int n;
    cin>>n;
    Print(n);
    return 0;
}