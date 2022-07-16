#include<iostream>
using namespace std;
int fibo(int n) {
     int(n == 1) return 1;                                          //fibo of 1 and 2 is 1
     int(n == 2) return 1;
    int partialAns1 = fibo(n-1);                                    //i.e for fibo of 4 we need fibo value of 4 and 3
    int partialAns2 = fibo(n-2);
    return partialAns1 + partialAns2 ;                            //sum of fibo value of previous two no
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}