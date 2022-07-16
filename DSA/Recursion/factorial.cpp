#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
         return 1;                                          //fact of 0 is 1;
    }
    int partialAns=factorial(n-1);                         //eg fact(4)=3!
    return n*partialAns;                                   //3!*4
}
 int main(){

     int n;
     cin>>n;

     if(n<0){                                              //fact of no less than 0 is undefined
         cout<<"Error";
     }
     else{
         cout<<factorial(n);                              //if no is greater or equal to 0 than call fact function
     }
     return 0;
 }