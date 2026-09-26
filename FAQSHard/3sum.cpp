#include<iostream>
#include<set>
using namespace std;
vector<vector<int>> threeSumBrute(vector<int>& nums) {
    int n=nums.size();
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int>temp ={nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}
vector<vector<int>> threeSumBetter(vector<int> &nums){
    int n=nums.size();
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        set<int> hashset;
        for(int j=i+1;j<n;j++){
            int k= -(nums[i]+nums[j]);
            if(hashset.find(k)!=hashset.end()){
                vector<int> temp={nums[i],nums[j],k};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}
vector<vector<int>> threeSumOptimal(vector<int>&nums){
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else {
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j-1]==nums[j]) j++;
                    while(j<k&& nums[k+1]==nums[k]) k--;

                }
            }
        }
        return ans;

}
int main(){
    vector<int> nums ={-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSumOptimal(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}