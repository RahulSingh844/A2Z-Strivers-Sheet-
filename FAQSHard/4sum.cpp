#include<iostream>
using namespace std;
#include<set>
vector<vector<int>> fourSumBrute(vector<int>& nums, int target) {
    int n=nums.size();
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    if(nums[i]+nums[j]+nums[k]+nums[l]==target){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}
vector<vector<int>> fourSumBetter(vector<int>& nums, int target) {
    int n=nums.size();
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long long>hashset;
                for(int k=j+1;k<n;k++){
                        long long fourth = (long long)target-((long long)nums[i]+nums[j]+nums[k]);
                        if(hashset.find(fourth)!=hashset.end()){
                            vector<int> temp = {nums[i],nums[j],nums[k],(int)fourth};
                            sort(temp.begin(),temp.end());
                            st.insert(temp);
                        }
                        hashset.insert(nums[k]);
                }
                    
            }
        }
        
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
}


int main(){
    vector<int> nums={1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>> ans = fourSumBetter(nums,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}