#include <bits/stdc++.h>
using namespace std;
void Print(int n){
    // // Approach-1
    // for(int i=0;i<2*n;i++){
    //     if(i <= ((2*n -1)/2)){
    //         for(int j=0;j<=i;j++)
    //             cout<<"* ";
    //     }
    //     else{
    //         for(int j=0;j<2*n-1-i;j++)
    //             cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Approach-2
    int stars;
    for(int i=0;i<2*n-1;i++){
        stars = (n-1<i)?2*(n-1)-i:i;
        for(int j=0;j<=stars;j++)
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