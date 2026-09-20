#include<iostream>
using namespace std;
void nextPermutation(vector<int>& arr) {
    next_permutation(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
vector<int> nextPermutationOptimal(vector<int> &arr) {
    int n= arr.size();
    int ind = -1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(arr.begin(),arr.end());
        return arr;
    }
    for(int i=n-1;i>ind;i--){
        if(arr[ind]<arr[i]){
            swap(arr[ind],arr[i]);
            break;
        }
    }
    reverse(arr.begin()+ind+1,arr.end());
    return arr;
}
int main(){
    vector<int> arr={2,9,4,5,3,2,1};
    nextPermutation(arr);
    cout<<endl;
    vector<int> arr1 = nextPermutationOptimal(arr);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
}