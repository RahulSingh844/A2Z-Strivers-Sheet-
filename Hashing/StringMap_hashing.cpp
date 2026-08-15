#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    map<char ,int> map;
    for(int i=0;i<s.length();i++){
        map[s[i]] = map[s[i]]+1;
    }
    for(auto it: map){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cout<<"How many characters do you want to find:";
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<map[c]<<endl;
    }
    return 0;
}