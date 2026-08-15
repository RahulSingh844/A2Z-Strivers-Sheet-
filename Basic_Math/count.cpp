#include<iostream>
using namespace std;
// Brute force approach // TC = O(log10 n)
int count(int n){
    int Tcount=0;
    while (n>0)
    {
        n = n/10;
        Tcount++;

    }
    return Tcount;
}
// Optimized approach
int count2(int n){
    int Tcount= log10(n)+1; // TC = o(1)
    return Tcount;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Number of digits: "<<count(n)<<endl;
}