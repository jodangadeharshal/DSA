#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==1)return 1;                                 //sum of 1 is 1
    int partialAns=sum(n-1);                           //partialAns will store sum of previous no i.e pA=sum(3)
    return n+partialAns;                              //n is 4 than i.e 4+3+2+1=10
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);                                 //sum function will be called
    return 0;
}