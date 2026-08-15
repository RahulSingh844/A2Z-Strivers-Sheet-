#include<iostream>
using namespace std;
int fabonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fabonacci(n-2) + fabonacci(n-1);
    
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<fabonacci(n);
}