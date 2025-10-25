//swap two numbers
// i/p--> a=7;b=8;
// o/p--> a=8;b=7
#include<iostream>
using namespace std;

int main(){
    int a=7,b=8;
    cout<<"a="<<a<<", b="<<b<<endl;
    //swap numbers by using temp variable
   int temp=a;
   a=b;
   b=temp;//b=a
   cout<<"a="<<a<<", b="<<b<<endl;
   
    return 0;
}