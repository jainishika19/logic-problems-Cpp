// print table 
#include<iostream>
using namespace std;
void printTable(int n){
    for(int i=1;i<=10;i++){
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
}

int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<"table of "<<n<<" is:"<<endl;
    printTable(n);
    
    return 0;
}