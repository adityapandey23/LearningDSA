// // Pattern-1
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++)
//             cout<<j+1;
//         cout<<endl;
//     }
//     return 0;
// }



// // Pattern-1 (while only implementation)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;

//     int i=0,j;
//     while(i<n){
//         j=0;
//         while(j<n){
//             cout<<j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }



// // Pattern-2
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     int i=n,j;
//     while(i>0){
//         j=n;
//         while(j>0){
//             cout<<j;
//             j--;
//         }
//         cout<<endl;
//         i--;
//     }

//     return 0;
// }



// // Pattern-2 (Different approach)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     int i=0,j;
//     while(i<n){
//         j=0;
//         while(j<n){
//             cout<<n-j;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }



// // Pattern-3
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     int count=1,i=0,j;
//     while(i<n){
//         j=0;
//         while(j<n){
//             cout<<count;
//             j++;
//             count++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }



// // Pattern-4
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     int i=0,j;
//     while(i<n){
//         j=0;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }



// // Pattern-5
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     int i=0,j;
//     while(i<n){
//         j=0;
//         while(j<=i){
//             cout<<i+1;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }