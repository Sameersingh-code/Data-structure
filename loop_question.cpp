// #include<iostream>
// using namespace std;
// int main(){
//     // sum of all number from 1 to n which are divisible by 3

//     cout<<"Enter a number"<<" ";
//     int n;
//     int sum = 0;
//     cin>>n;
//     for(int i =1; i<=n; i++){
//         if(i%3 == 0){
//             sum = sum + i;
//         }
//     }
//     cout<<"The sum of number is : "<<sum;
// }
#include<iostream>
using namespace std;
int main(){
    //Factorial of number
    cout<<"Enter a number "<<" ";
    int n , fact = 1;
    cin>>n;
    for(int i = 1; i<=n; i++){
        fact = fact*i;
    }
    cout<<"your factorial number is "<<fact;
    
}
