#include<iostream>
using namespace std;
int countSubarrays(vector<int>& nums, int x) {
    int n= nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        int sub;
        for(int j=i+1;j<n;j++){
            sub = nums[i]^nums[j];
            if(sub==x){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> nums ={4,2,2,6,4};
    int x=6;
    cout<<countSubarrays(nums,x);
}