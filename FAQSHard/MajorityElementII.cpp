#include<iostream>
#include<map>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> ls;
    for(int i=0;i<n;i++){
        if(ls.size()==0 || find(ls.begin(),ls.end(),nums[i])==ls.end()){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>(n/3)){
                ls.push_back(nums[i]);
            }
        }
        if(ls.size()==2){
            break;
        }
    }
    return ls;
}
vector<int> majorityElementBetterHashing(vector<int>& nums) {
    int n=nums.size();
    map<int,int> map;
    vector<int> ls;
    for(int i=0;i<n;i++){
        map[nums[i]]++;
    }
    for(auto it:map){
        if(it.second>(n/3)){
            ls.push_back(it.first);
        }
    }
    return ls;
}
//more better
vector<int> majorityElementMoreBetter(vector<int>& nums) {
    int n=nums.size();
    map<int,int> map;
    int min = int(n/3)+1;
    vector<int> ls;
    for(int i=0;i<n;i++){
        map[nums[i]]++;
        if(map[nums[i]]==min){
            ls.push_back(nums[i]);
        }
        if(ls.size()==2){
            break;
        }
    }
    sort(ls.begin(),ls.end());
    return ls;
}       
vector<int> majorityElementOptimal(vector<int>& nums) {
    int n=nums.size();
    int el1 = INT_MIN;
    int el2 = INT_MIN;
    int count1 =0;
    int count2 =0;
    for(int i=0;i<n;i++){
        if(count1==0 && el2!=nums[i]){
            count1=1;
            el1=nums[i];
        }
        else if(count2==0&& el1!=nums[i]){
            count2=1;
            el2=nums[i];
        }
        else if(el1==nums[i]){
            count1++;

        }
        else if(el2==nums[i]){
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    vector<int>ls;
    count1=0;
    count2=0;
    for(int i=0;i<n;i++){
        if(el1==nums[i]) count1++;
        if(el2==nums[i]) count2++;
    }
    int min = int(n/3)+1;
    if(count1 >= min) ls.push_back(el1);
    if(count2 >= min) ls.push_back(el2);
    sort(ls.begin(),ls.end());
    return ls;
}
int main(){
    vector<int> arr={1,2};
    vector<int> ls=majorityElementOptimal(arr);
    for(int i=0;i<ls.size();i++){
        cout<<ls[i]<<" ";
    }
}   