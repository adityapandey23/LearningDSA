#include <bits/stdc++.h>
using namespace std;
void Print(int n){
    
    int stars = 0;
    for(int i=0;i<2*n-1;i++){
        stars = (i>n-1)?stars-1:stars+1;

        // stars
        for(int j=0;j<stars;j++)
            cout<<"*";

        // space
        for(int j=0;j<2*(n-stars);j++)
            cout<<" ";

        // stars
        for(int j=0;j<stars;j++)
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