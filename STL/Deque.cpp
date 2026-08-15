#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque <int> d;
    d.push_back(1);
    d.emplace_back(2);
    d.push_front(3);
    d.emplace_front(4);
    for(auto id:d){
        cout<<id<<" ";
    }
    return 0;
}