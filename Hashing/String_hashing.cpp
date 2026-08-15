#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter string";
    cin>>s;
    
    int hash[27]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']= hash[s[i]-'a']+1;
    }
    int q;
    cout<<"How many characters do you want to find:";
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}