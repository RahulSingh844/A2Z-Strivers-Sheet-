#include<iostream>
#include<map>
using namespace std;
void BetterAppMajority(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int find=arr[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(find==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            cout<<find;
            break;
        }
    }
}
void Better(vector<int> &arr){
    map<int,int> map;
    int n=arr.size();
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    for(auto it:map){
        if(it.second>n/2){
            cout<<it.first;
        }
    }

}
void OptimaApp(vector<int>&arr){
    int n=arr.size();
    int count=0;
    int el;
    for(int i=0;i<n;i++){
        if(count==0){
            el=arr[i];
            count++;
        }
        else if(el==arr[i]){
            count++;
        }
        else count--;
    }
    int count1=0;
    for(int i=0;i<n;i++){
        if(el == arr[i]){
            count1++;
        }
    }
    if(count1>n/2){
        cout<<el;
    }
    else cout<<"NO";
}
int main(){
    vector <int> arr={7,7,4,5,5,4,7,7,7,7,4,4,4,5,5,5,1,2,7,7,7,7,7,7, 7};
    OptimaApp(arr);
}