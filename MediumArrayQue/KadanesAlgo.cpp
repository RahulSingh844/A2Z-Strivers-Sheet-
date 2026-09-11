#include<iostream>
using namespace std;
int maxSubArray(vector<int> &arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            int sum = 0;
            for (int k = i; k <= j; k++){
                sum = sum + arr[k];
                maxi = max(maxi, sum);
            }
        }
    }
    return maxi;
}
int BettermaxSubArray(vector<int> &arr){
    
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            maxi=max(maxi,sum);
        }
    }
    return maxi;
}
int OptimalAppMaxSubArray(vector<int> &arr){
    int n = arr.size();
    int sum=0;
    int maxi =INT_MIN;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
        maxi=max(sum ,maxi);
        if(sum<0){
            sum = 0;
        }   
    }
    return maxi;
}
void PrintSubArray(vector<int> &arr){
    int n=arr.size();
    int sum=0;
    int maxi=INT_MIN;
    int start=0;
    int end =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            end=i;
        }
        if(sum<0){
            sum=0;
            start=i+1;
        }
    }
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    cout<<BettermaxSubArray(arr);
    cout<<endl;
    PrintSubArray(arr);
    return 0;
}