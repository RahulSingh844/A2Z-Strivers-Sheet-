#include<iostream>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(5);
    v.emplace_back(9);
    vector <pair<int,int> >v1;
    v1.push_back({21 ,4});
    v1.emplace_back(1,5);
    vector <int> v2(5 ,100);
    vector<int>v3(3);
    vector<int>v4(v2);
    // cout<<v1[0].first;
    
    vector<int> arr[5]={{1 , 2 ,3 ,4 ,5}};
    

    arr[0].erase(arr[0].begin()+2 , arr[0].begin()+4); // erase from 3rd index to not include end


    // for(auto it:arr[0]){ 
    //     cout<<it<<" ";
    // }


    //insert function
    vector<int> v5[5]={{1 , 2 ,3 ,4 ,5}};
    v5[0].insert(v5[0].begin()+2 , 900); // insert 900 at 3rd index
    v5[0].insert(v5[0].begin()+4 , 3, 800); // insert 3 instances of 800 at 5th index
    for(auto it: v5[0]){
        cout<<it<<" ";
    }
}