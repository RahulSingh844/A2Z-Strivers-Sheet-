#include<iostream>
#include<map>
using namespace std;
// Better Approach tc = O(nlogn)
void AppearOncebyUsingHashing(vector <int>&arr,int m){
    map<int,int> presummap;
    int n=arr.size();
    int sum,maxcount=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==m){
            maxcount=max(maxcount,i+1);
        }
        int rem=sum-m;
        if(presummap.find(rem)!=presummap.end()){
            maxcount=max(maxcount,i-presummap[rem]);
        }
        if(presummap.find(sum)==presummap.end()){
            presummap[sum]=i;
        }
    }
    cout<<maxcount;
}
//Brute Force tc = O(n^2)
void AppearOnce(vector <int>&arr,int m){
    int count=0,maxcount=0,length=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            count=0;
            for(int k=i;k<=j;k++){
                count = count +arr[k];
            }
            if(count == m){
                length=j-i+1;
                maxcount=max(maxcount,length);
            }
            
            
        }
    }
    cout<<maxcount;
}
//Optimal Approach tc = O(n)
void OptimalAppear(vector <int>&arr,int m){
    int n =arr.size();
    int count=0,maxcount=0,length=0;
    int i=0;
    for(int j=0;j<n;j++){
        count =count+arr[j];
        while(count > m && i <= j) {
            count -= arr[i];
            i++;
        }
        if(count==m){
            length=j-i+1;
            maxcount=max(maxcount,length);
        }
    }
    cout<<maxcount;
}
int main(){
    vector<int> arr={1,2,3,1,1,1,1,4,2,3};
    int m=6;
    OptimalAppear(arr,m);
    return 0;
}