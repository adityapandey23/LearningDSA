#include <bits/stdc++.h>
using namespace std;
void Print(int n){

    // // Approach-1
    // for(int i=n;i>0;i--){
    //     for(int j=0;j<i;j++)
    //         cout<<"* ";
    //     cout<<endl;
    // }

    // Approach-2
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++)
            cout<<"* ";
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