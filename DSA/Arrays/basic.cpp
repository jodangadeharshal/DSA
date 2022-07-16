#include<iostream>
using namespace std;

int main(){
     //to access arr value
    int first[3]={4,5,6};
    cout<<first[2]<<endl;

    //to print whole array
    int second[10]={3,5,6,7,8,1};
    int n=10;
    for(int i=0;i<n-1;i++){
        cout<<second[i];
    }
}

