#include <bits/stdc++.h>
using namespace std;
void Print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
            cout<<" ";
        for(int k=0;k<2*i+1;k++)
            cout<<"*";
        for(int l=0;l<n-i-1;l++)
            cout<<" ";
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)
            cout<<" ";
        for(int k=0;k<(2*n-1)-(2*i);k++)
            cout<<"*";
        for(int l=0;l<i;l++)
            cout<<" ";
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