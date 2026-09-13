#include<iostream>
using namespace std;
void BruteSort(vector<int>&arr){
    int count0=0,count1=0,count2=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        if(arr[i]==1){
            count1++;
        }
        if(arr[i]==2){
            count2++;
        }
    }
    int i=0;
    while(count0--){
        arr[i++]=0;
    }
    while(count1--){
        arr[i++]=1;
    }
    while(count2--){
        arr[i++]=2;
    }
}
void OptimalSort(vector<int> &arr){
    int n=arr.size();
    int low=0,mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1) mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    vector<int>arr={0,1,1,0,1,2,1,2,0,0,1,2};
    // BruteSort(arr);
    OptimalSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];
    }
    
}