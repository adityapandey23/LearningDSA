#include <bits/stdc++.h>
using namespace std;
void Print(int n){
    // // Approach-1
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++)
    //         cout<<char(j+65)<<" ";
    //     cout<<endl;
    // }

    // Approach-2
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++)
            cout<<j<<" ";
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