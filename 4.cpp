// sum of sqaures of all natural numbers
#include<iostream>
using namespace std;
int summation(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+(i*i);
    }
    return sum;
}

int main(){
    int n=2;
    cout<<summation(n);
    return 0;
}
