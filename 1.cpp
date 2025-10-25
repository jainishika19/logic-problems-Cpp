// check even or odd
#include<iostream>
using namespace std;
bool isEven(int n){//it checks remainder ==0 or not
    int rem=n%2;
    if(rem==0){
        return true;
    }
    else {
    return false;
    }
}

int main(){
    int n=17;
    if(isEven(n))//if bool funtn that we created return true
    //then it prints even
    cout<<"even";
    else
    cout<<"odd";
    
    return 0;
}