#include<iostream>
using namespace std;
void factors(int n){
    //O(n) Approach
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
//optimal Approach O(sqrt(n))
void ofactor(int n){
    int s =sqrt(n);
    for(int i=1;i<=s;i++){
        if(s%i==0){
            cout<<i<<" "<<(s/i);
        }
    }
}
int main(){
    int n;
    cout<<"Enter No.";
    cin>>n;
    ofactor(n);
}