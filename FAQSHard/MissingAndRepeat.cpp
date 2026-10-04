#include<iostream>
using namespace std;
//Brute Approach
void findMissingRepeatingNumbersBrute(vector<int> &nums) {
        int n=nums.size();
        int missing=-1;
        int repeat=-1;
        for(int i=1;i<=n;i++){
            int count =0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    count++;
                }
            }
            if(count==0) missing=i;
            if(count ==2) repeat=i;
        }
        cout<<"Missing number:"<<missing<<endl;
        cout<<"Repeting number:"<<repeat;

        // vector<int> arr(2,0);
        // arr[0]=repeat;
        // arr[1]=missing;
        // return arr;
        // return {repeat , missing};

}
//Better Approach
void findMissingRepeatingNumbersBetter(vector<int> nums) {
        int n=nums.size();
        int missing;
        int repeat;
        vector<int> hash(n+1,0);
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(hash[i]==0) missing=i;
            if(hash[i]==2) repeat=i;
        }
        // return {repeat,missing};
        cout<<"Missing number:"<<missing<<endl;
        cout<<"Repeting number:"<<repeat;
}
// Optimal 1
void findMissingRepeatingNumbers(vector<int> nums) {
        //s sn
        // x+y=s-sn 1st eq
        //s2 s2n
        //x2 -y2 = s2-s2n
        long long n=nums.size();
        long long sn= n*(n+1)/2;
        long long s2n= n*(n+1)*(2*n+1)/6;
        long long s=0;
        long long s2=0;
        for(int i=0;i<n;i++){
            s += nums[i];
            s2 += 1LL * nums[i] * nums[i];
        }
        long long x;
        long long y;
        long long val1=sn-s;
        long long val2=s2n-s2;
        val2=val2/val1;
        x=(val1+val2)/2;
        y=x-val1;
        // return {(int)y,(int)x};

        cout<<"Missing number:"<<x<<endl;
        cout<<"Repeting number:"<<y;
    }
int main(){
    vector<int> nums={1,3,2,5,6,6};
    // findMissingRepeatingNumbersBrute(nums);
    findMissingRepeatingNumbers(nums);
}