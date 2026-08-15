#include<iostream>
using namespace std;
 void Reverse(int n){
    int rev = 0;
    int dup=0;
   //  if(n<0){
   //     dup=n;
   //    n = -n;
   //  }
    while (n!=0)
    {
        int last = n%10;
        rev = last +(rev*10);
        n=n/10;
    }
    cout<<rev;
   //  if(dup<0){
   //    cout<<-(rev);
   //  }
   //  else cout<<"Reverse No. "<<rev;
    
 }
 int main(){
    int n;
    cout<<"Enter no.";
    cin>>n;
    Reverse(n);


 }