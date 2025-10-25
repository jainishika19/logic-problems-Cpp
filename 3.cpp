// sum of natural numbers
#include<iostream>
using namespace std;
int printSum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n=5;
    cout<<"sum is:";
    cout<< printSum(n);

    return 0;
}