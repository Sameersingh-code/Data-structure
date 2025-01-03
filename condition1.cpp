#include<iostream>
using namespace std;
int main(){
    // while(5<3){
    //     cout<<"my statement is wrong";
    // }
    // do{
    //     cout<<"My statement is wrong still My code is runing."<<endl;
        
    // }while(5<3);
    // int i = 1, j =7;
    // do{
    //     cout<<i<<" ";
    //     i++;
        
    // }while(i<j);
    
    // cout<<"\n";
    // int m = 1, n =7;
    // while(m<n){
    //     cout<<m<<" ";
    //     m++;
    // }
    //It's is normal method for find differnt number in input
    // int i =2;
    // int num;
    // bool Cprime = 1;
    // cout<<"Enter a number ";
    // cin>>num;
    
    // while((num-1)>=i){
    //     if(num%i == 0){
    //         Cprime = 0;
    //         break;
    //     }
    //     i++;
    // }
    // if(Cprime == 0){
    //     cout<<"Your number is not prime";
    // }else{
    //     cout<<"Your number is prime";
    // }
    // It is another technic for find the number prime number
    // 12 = 1*12
    // 12 = 3*4
    // repeation start so we can half loop becauce number is same
    // 12 =6*2
    // 12 =12*1
    bool NumPrime = 1;
    int num;
    cin>> num;
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            NumPrime = 0;
            break;
        }
    }
    if(NumPrime== 0){
        cout<<"Your number is prime";
    }else{
        cout<<"Your number is not prime";
    }
    
    
    
}
