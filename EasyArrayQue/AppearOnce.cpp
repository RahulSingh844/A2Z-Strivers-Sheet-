#include<iostream>
#include<map>
using namespace std;

void BruteAppear(vector<int> &arr){
    int n = arr.size();
    
    for(int i=0;i<n;i++){
        int num =arr[i];
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i];
        }
    }
}
//By Hashing
void BetterAppear(vector<int> &arr){
    int n = arr.size();
    int maxm=arr[0];
    for(int i=0;i<n;i++){
        maxm = max(arr[i],maxm);
    }
    vector<int> hash(maxm+1,0);
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] == 1) cout<<arr[i];
    }
}
//By Mapping
void BetterAppear2(vector<int> &arr){
    map<int ,int> map;
    int n = arr.size();
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    for(auto it:map){
        if(it.second==1){
            cout<<it.first<<" ";
        }
    }
}
//Optimal Approach
void OptimalAppear(vector<int> &arr){
    int n=arr.size();
    int xor1 = 0;
    for(int i=0;i<n;i++){
        xor1=xor1^arr[i];
    }
    cout<<xor1;
}
int main(){
    vector<int> arr ={1,1,2,2,3,3,4,4,5,5,6,6,7};
    OptimalAppear(arr);
}