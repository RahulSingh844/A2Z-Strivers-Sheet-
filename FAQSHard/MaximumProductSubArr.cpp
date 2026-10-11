#include<iostream>
using namespace std;
int maxProd(vector<int>&arr){
    int n = arr.size();
    int prefix=1;
    int suffix=1;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        prefix=prefix*arr[i];
        suffix= suffix*arr[n-i-1];
        maxi=max(maxi, max(prefix, suffix));
        if(prefix==0) prefix=1;
        if(suffix==0) suffix=1;
    }
    return maxi;
}
int main(){
    vector<int> arr={3,4,2,-1,0 ,4,5,0, -1 ,-3,-4,-9};
    cout<<maxProd(arr);
}