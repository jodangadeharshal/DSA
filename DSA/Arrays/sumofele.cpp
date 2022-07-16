#include<iostream>
using namespace std;

int getSum(int arr[],int size){
for(int i=0;i<size;i++){
    int sum=0;
    sum=sum+arr[i];
}
}
return sum;

int main(){
    int n=5;
    int array[5]={5,6,7,8,9};
    cout<<"sum of all elements in an array is: "<<getSum(array,n);
    return 0;

    }