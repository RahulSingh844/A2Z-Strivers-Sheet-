#include<iostream>
#include<map>
using namespace std;
void countSubArray(vector<int> arr,int k){
    int n =arr.size();
    int Totalsub=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum == k){
                Totalsub++;
            }
        }
    }
    cout<<Totalsub;
}
void countSubArrayOpt(vector<int> arr,int k){
    int n = arr.size();
    int sum=0;
    int count=0;
    map<int ,int> map;
    map[0]=1; //map[key -> sum] = (value ->1)
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        int rem =sum-k;
        count = count+map[rem];
        map[sum]+=1;
    }
}
int main(){
    vector<int> arr={1,2,3,-3,1,1,1,4,2,-3};
    int k=3;
    countSubArray(arr,k);
}