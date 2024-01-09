#include <bits/stdc++.h>
using namespace std;
void Print(int n){
    // Upper Triangle
    for(int i=0;i<n;i++){
        // Stars
        for(int j=0;j<n-i;j++)
            cout<<"*";

        // Spaces
        for(int j=0;j<(2*i);j++)
            cout<<" ";

        // Stars
        for(int j=0;j<n-i;j++)
            cout<<"*";

        cout<<endl;
    }

    // Lower Triangle
    for(int i=0;i<n;i++){
        // Stars
        for(int j=0;j<=i;j++)
            cout<<"*";

        // Space
        for(int j=0;j<2*(n-1-i);j++)
            cout<<" ";

        // Stars
        for(int j=0;j<=i;j++)
            cout<<"*";

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