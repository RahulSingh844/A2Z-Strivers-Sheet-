#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> ls;
    ls.push_back(5);
    ls.push_back(9);
    ls.push_front(1);
    ls.emplace_back(10);
    cout<<"List elements are: ";
    for(auto it:ls){
        cout<<it<<" ";  
    }
    cout<<endl<<"Size of the list is: "<<ls.size();
}