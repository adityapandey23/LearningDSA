#include <bits/stdc++.h>
using namespace std;
void Print(int n){
    // // Approach-1
    // for(char i = 'A'+n-1;i>='A';i--){
    //     for(char j = i;j<='A'+n-1;j++)
    //         cout<<j<<" ";
    //     cout<<endl;
    // }

    // Approach-2
    for(int i=0;i<n;i++){
        for(char j = 'E'-i;j<='E';j++)
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