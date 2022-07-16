#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        
        cin>>arr[i];
        cout<<arr[i]<<endl;
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    printArray(arr,size);
    return 0;
}