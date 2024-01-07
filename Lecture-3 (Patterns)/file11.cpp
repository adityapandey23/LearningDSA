#include <bits/stdc++.h>
using namespace std;
void Print(int n){
    // // Approach-1
    // bool f;
    // for(int i=0;i<n;i++){
    //     f = (i%2==0)?true:false;
    //     for(int j=0;j<=i;j++){
    //         cout<<f<<" ";
    //         f = !f;
    //     }
    //     cout<<endl;
    // }

    // Approach-2
    int start;
    for(int i=0;i<n;i++){
        start = (i%2==0)?1:0;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start = 1 - start; 
        }
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