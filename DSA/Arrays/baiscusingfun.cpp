//use of function in array
#include<iostream>
using namespace std;

//function
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";   
    }
}
int main(){
    int first[5]={4,5,6,7,0};
    int n=5;
    printArray(first,5);
 cout<<"int array printed"<<endl;


//char array
char ch[5]={'a','b','c'};
cout<<"char array is printing"<<endl;
for(int i=0;i<3;i++){
    cout<<ch[i]<<" ";
    return 0;
}
}
