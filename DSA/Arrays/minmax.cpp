#include<iostream>
using namespace std;
int getMax(int arr[],int n){
    int max=INT32_MIN;
    for(int i=0;i<n;i++){                            //ye bs min and max ko comapre and return krne ke liye hai!!
    if(arr[i]>max){
        max=arr[i];
    }
}
return max;
}
int getMin(int arr[],int n){
    int min=INT32_MAX;
    for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
return min;
}
int main(){
    int size;                                                   //how many ele 
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[10];                                                //jo idhar enter krenge same 29&20 m3 bhi dena pdenga nhi to garabage value bhi lenga
    for(int i=0;i<size;i++){                                     //taking arr ele
        cin>>arr[i];
    }
    cout<<"Max no in an array is "<<getMax(arr,10)<<endl;
    cout<<"Min no in an array is "<<getMin(arr,10);
}

