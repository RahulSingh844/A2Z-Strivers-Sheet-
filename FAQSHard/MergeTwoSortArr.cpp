#include<iostream>
using namespace std;
void mergeTwoSortArrBrute(vector<int> &arr1 , vector<int> &arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int>arr3(n+m);
    for(int i=0;i<n+m;i++){
        if(i>=n){
            arr3[i]=arr2[i-n];
        }
        else arr3[i]=arr1[i];
    }
    sort(arr3.begin(),arr3.end());
    for(int i=0;i<n+m;i++){
        if(i>=n){
            arr2[i-n]=arr3[i];
        }
        else arr1[i]=arr3[i];
    }

}
void mergeTwoUsingMerge(vector<int> &arr1 , vector<int> &arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int>arr3(n+m);
    int left = 0;
    int right =0;
    int index=0;
    while(left<n && right<m){
        if(arr1[left]<=arr2[right]){
            arr3[index++]=arr1[left++];
            
        }
        else{
            arr3[index++] = arr2[right++];
        }
    }
    while(left<n){
        arr3[index++]=arr1[left++];
    }
    while(right<m){
        arr3[index++]=arr2[right++];
    }
    for(int i=0;i<n+m;i++){
        cout<<arr3[i]<<" ";
        // if(i>=n){
        //     arr2[i-n]=arr3[i];
        // }
        // else arr1[i]=arr3[i];
    }
}
void mergeTwoSortOptimal1(vector<int> &arr1,vector<int>&arr2){
    int  n=arr1.size();
    int m=arr2.size();
    int left=n-1;
    int right=0;
    while(left>=0 && right<m){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else break;
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl<<"Arr2"<<endl;
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
}
void swapfunc(vector<int>&arr1,vector<int>&arr2 , int ind1 , int ind2){
    if(arr1[ind1]>arr2[ind2]){
        swap(arr1[ind1],arr2[ind2]);
    }
    
}
void mergeTwoSortOptimal2(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    int len=n+m;
    int gap=(len/2)+(len%2);
    
    while (gap>0)
    {
        int left=0;
        int right=left+gap;
       while(right<len){
        //In arr1and arr2
        if(left<n&&right>=n){
            swapfunc(arr1,arr2,left,right-n);
        }
        //in arr1
        else if(left<n){
            swapfunc(arr1,arr1,left,right);
        }
        //in arr2
        else{
            swapfunc(arr2,arr2,left-n,right-n);
        }
        left++;
        right++;
        }
        if(gap ==1) break;
        else gap=(gap/2)+(gap%2);
 
    }
    
    
}

int main(){
    vector<int>arr1 = {-5,-2,4,5};
    vector<int>arr2={-3,1,8};
    // mergeTwoSortArrBrute(arr1,arr2);
    // mergeTwoUsingMerge(arr1,arr2);
    mergeTwoSortOptimal2(arr1,arr2);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
}    
