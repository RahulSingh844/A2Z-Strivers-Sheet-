#include<iostream>
using namespace std;

long long mergearr(vector<int> &arr , int low ,int mid, int high){
            int left = low;
            int right = mid+1;
            long long count = 0;
            vector<int> temp;
            while(left<=mid && right <=high){
                if(arr[left] <= arr[right]){
                    temp.push_back(arr[left++]);
                    // left++;
                }
                else{
                    temp.push_back(arr[right++]);
                    count += mid-left+1;
                }
            }
            while(left<=mid){
                temp.push_back(arr[left++]);
            }
            while(right<=high){
                temp.push_back(arr[right++]);
            }
            for(int i=low;i<=high;i++){
                arr[i]=temp[i-low];
            }
            return count;
        }
        long long mergesort(vector<int> &arr , int low ,int high ){
            if(low>=high) return 0;
            int mid = low + (high - low) / 2;
            long long count = 0;
            count+=mergesort( arr , low ,mid);
            count+=mergesort(arr, mid+1, high);
            count+=mergearr(arr,low , mid ,high);
            return count;
        }
   long long int numberOfInversions(vector<int> &arr) {
       return mergesort(arr, 0,arr.size()-1);
        
    }

int main(){
    vector<int> arr={5,2,4, 3,1};
     cout<<numberOfInversions(arr);
}