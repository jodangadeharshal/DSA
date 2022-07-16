#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
     for(int i=0;i<n;i++){
         if(arr[i]==key){
             return 1;
         }
     }
     return 0;
     }
     int main(){
         int arr[10]={6,7,8,9,0,4,3,1};
         int key;
         cout<<"Enter the key to be searched "<<endl;
         cin>>key;
         bool found=search(arr,8,key);
         if (found){
             cout<<"key is found"<<endl;
         }
         else{
         cout<<"key is not found"<<endl;
         }
         return 0;
     }
