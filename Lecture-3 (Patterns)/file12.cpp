#include <bits/stdc++.h>
using namespace std;
void Print(int n){
    for(int i=0;i<n;i++){
        // Number
            for(int j=0;j<=i;j++)
                cout<<j+1;

        // Space 
            for(int j=0;j<n-i-1;j++)
                cout<<" ";

        // Space
            for(int j=0;j<n-i-1;j++)
                cout<<" ";

        // Number
            for(int j=0;j<=i;j++)
                cout<<j+1;
            
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