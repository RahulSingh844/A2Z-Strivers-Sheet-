#include<iostream>
using namespace std;
bool reverse(int l ,string s){
    if(l>=s.length()/2){
        return true;
    }
    if(s[l]!=s[s.size()-l-1]){
        return false;
    }
    
    return reverse(l+1,s);
}
int main(){
    string s;
    cout<<"Enter a string";
    cin>>s;
    if(reverse(0,s)){
        cout<<"String is palindrome";
    }
    else{
        cout<<"String is not palindrome";
    }
    return 0;
}