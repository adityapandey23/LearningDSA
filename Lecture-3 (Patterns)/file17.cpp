// Revise
#include <bits/stdc++.h>
using namespace std;
void Print(int n){
    char ch;
    for(int i=0;i<n;i++){
        ch ='A';
        // Space
        for(int j=0;j<n-i-1;j++)
            cout<<" ";

        // Alphabet
        for(int j=0;j<2*i+1;j++){
            cout<<ch<<" ";
            ch = ((2*i+1)/2<=j)?ch-1:ch+1;
        }

        // Space
        for(int j=0;j<n-i-1;j++)
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