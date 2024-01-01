// // Question-1 (Even Numbers)
// #include <iostream>
// using namespace std;
// int main(){
//     int n,i=1;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     while(i<=n){
//         if(i%2==0)
//             cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }



// // Question-2 (Prime Numbers in a given range only using while loops)
// #include <iostream>
// using namespace std;
// int main(){
//     int begin,end,temp;
//     cout<<"Enter the range of the numbers: "<<endl;
//     cin>>begin>>end;
//     (begin>end)?(temp = begin, begin = end, end = temp):1; // Swapping for uneven limits

//     while(begin != end){
//         int i = 2; bool flag = true;
//         if(begin <= 1){ // Negative number, zero and one cannot be classified into prime
//             goto forward;
//         } 
//         else{
//             while(i<=(begin/2)){
//                 if(begin%i==0){
//                     flag = false;
//                     break;
//                 }
//                 i++;
//             }
//             if(flag)
//                 cout<<begin<<" ";
//         }
//         forward:
//         begin++;
//     }
//     return 0;
// }



// // Question-3 (Basic Pattern - Square of stars)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++)
//             cout<<"*";
//         cout<<endl;
//     }
//     return 0;
// }



// // Question-3 (Basic Pattern - Square of numbers - only while)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     int i=0;
//     while(i<n){
//         int j=0;
//         while(j<n){
//             cout<<i+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }