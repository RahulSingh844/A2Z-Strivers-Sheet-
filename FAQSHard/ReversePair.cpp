#include<iostream>
using namespace std;
void mergearr(vector<int> &arr , int low ,int mid, int high){
            int left = low;
            int right = mid+1;
            vector<int> temp;
            while(left<=mid && right <=high){
                if(arr[left] <= arr[right]){
                    temp.push_back(arr[left++]);
                }
                else{
                    temp.push_back(arr[right++]);
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
            
        }
        int countpair(vector<int>&arr , int low , int mid, int high){
            int right = mid+1;
            int count = 0;
            for(int i=low;i<=mid;i++){
                while(right<=high && arr[i]>2LL*arr[right]){
                    right++;
                }
                count += (right - (mid+1));
            }
            return count;
        }
        int mergesort(vector<int> &arr , int low ,int high ){
            int count = 0;
            if(low>=high) return count;
            int mid = low + (high - low) / 2;
            count+=mergesort( arr , low ,mid);
            count+=mergesort(arr, mid+1, high);
            count +=countpair(arr, low , mid , high);
            mergearr(arr,low , mid ,high);
            return count;
        }
    int reversePairs(vector<int>&arr) {
        return mergesort(arr, 0, arr.size()-1);
    }
int main(){
    vector<int> arr={5,2,4, 3,1};
     cout<<reversePairs(arr);
}