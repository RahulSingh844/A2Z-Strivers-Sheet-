#include<iostream>
using namespace std;
void Palindrome(int n){
    int rev = 0;
    int dup = n;
    while(n!=0){
        int last = n%10;
        rev = last + (rev*10);
        n =n/10;
    }
    if( dup == rev ){
        cout<<dup<<" is a Paalindrome";

    }
    else
    {
        cout<<dup<<" is not a Palindrome";
    }
}
int main(){
    int n;
    cout<<"Enter no.";
    cin>>n;
    Palindrome(n);

}