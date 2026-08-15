#include<iostream>
using namespace std;
#include<map>

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    map <int ,int> map;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        map[arr[i]]= map[arr[i]]+1;
    }
    // Another way
    // map <int ,int> map;
    // for(int i=0;i<n;i++){
    //     map[arr[i]]=map[arr[i]]+1;
    // }

    for(auto it: map){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    int q;
    cout<<"How many numbers do you want to find:";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<map[number]<<endl;
    }
    return 0;
}