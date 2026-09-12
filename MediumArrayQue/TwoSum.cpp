#include<iostream>
#include<map>
using namespace std;
void TwoSumBruteApproach(vector<int> &arr,int target){
    int n=arr.size();
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }
    if(flag==1) cout<<"Yes";
    else cout<<"no";
}
void TwoSumBetterApproach(vector<int> &arr,int target){
    map<int,int> Twosum;
    int n=arr.size();
    int rem=0;
    int flag=0;
    for(int i=0;i<n;i++){
        rem=target-arr[i];
        if(Twosum.find(rem)!=Twosum.end()){
            flag=1;
            break;
        }
        Twosum[arr[i]]=i;
    }
    if(flag==1) cout<<"Yes";
    else cout<<"no";
}
void TwoSumOptimalApproach(vector<int> &arr,int target){
    int i=0;
    int n=arr.size();
    int j=n-1;
    int flag=0;
    sort(arr.begin(),arr.end());
    while(i<j){
        if(arr[i]+arr[j]>target){
            j--;
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"Yes";
    else cout<<"no";

}
int main(){
    vector<int> arr={2,6,5,8,11};
    int n=arr.size();
    int target=1;
    TwoSumOptimalApproach(arr,target);
}