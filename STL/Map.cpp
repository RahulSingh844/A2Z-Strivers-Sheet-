#include<iostream>
#include<map>

using namespace std;

int main(){

    //map of int
    map <int , int> m1;
    m1[1] = 10;
    m1[2] = 20;
    m1[3] = 30;
    m1.emplace(5, 40);
    for(auto it: m1){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<"-------------------"<<endl;

    //map of pair
    map <int , pair<int , int>> m2;
    m2[2] = {10, 30};
    m2[4] = {20, 40};
    m2.emplace(5, make_pair(30, 50));
    for(auto it: m2){
        cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    }

    cout<<"-------------------"<<endl;

    //map of pair as key
    //tc: O(logn) for insertion and deletion
    //tc: O(n) for searching
    //sc: O(n)
    map<pair<int ,int>,int>m3;
    m3[{1,4}] = 10;
    m3[{2,5}] = 20;
    m3.emplace(make_pair(3,6),30);
    for(auto it: m3){
        cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
    }

    //multimap of int
    //multimap store duplicate keys
    //tc: O(logn) for insertion and deletion
    //tc: O(n) for searching
    //sc: O(n)
    multimap<int , int> m4;
    m4.insert({1,10});
    m4.insert({1,20});
    m4.insert({2,30});
    for(auto it: m4){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}