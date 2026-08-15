#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(15);
    s.insert(25);
    s.insert(5);
    auto it = s.find(10);
    s.erase(it);
    cout<<*it<<endl;
    int is = s.count(10);
    cout<<is<<endl;
    
    for(auto is:s){
        cout<<is<<" ";
    }
}