#include<iostream>
using namespace std;
//Brute Force Approach 1
int GCD(int n1 , int n2){
    int gcd=1;
    for(int i ; i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd =i;
        }
    }
    return gcd;
}   
// Brute Force aproach 2
int GCD2(int n1,int n2){
    for(int i=min(n1, n2);i>1;i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    return 1;
}
//Euclidean Algorithm
int GCD3(int n1 ,int n2){
    while(n1>0 && n2>0){
        if(n1>n2) n1=n1%n2;
        else n2=n2%n1;
    }
    if(n1 ==0) return n2;
    else return n1;
}
int main(){
    int n1,n2;
    cout<<"Enter 1st no."<<endl;
    cin>>n1;
    cout<<"Enter 2st no."<<endl;
    cin>>n2;
    cout<<GCD2(n1,n2)<<"---2nd"<<endl;
    cout<<GCD3(n1,n2)<<"---3rd";
    

}