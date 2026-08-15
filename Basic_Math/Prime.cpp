#include<iostream>
using namespace std;
//O(n) Approach 
void prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
      if(n%i==0){
        count++;
      } 
    }
    if(count>2){
        cout<<"not a prime no.";
    }
    else cout<<"Prime No.";
}
// optimized approach O(sqrt(n))
void prime2(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
        }
    }
    if(count>2){
        cout<<"not a prime no.";
    }
    else cout<<"Prime No.";
}
int main(){
    int n;
    cout<<"Enter no.";
    cin>>n;
    prime2(n);
}