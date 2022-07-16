#include<iostream>
using namespace std;
void reverseArr(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }  
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){                       //printing reverse arr
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={0,1,2,5,6,7};
    reverseArr(arr,6);                            //calling that function
    printArray(arr,6);                             //calling printing function
    return 0;

}