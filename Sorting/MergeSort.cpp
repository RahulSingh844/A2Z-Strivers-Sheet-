#include<iostream>
using namespace std;
// by using vertor
void margeVec(vector<int> &arr, int low, int mid , int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
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
        arr[i] = temp[i-low];
    }
}
void mergeSortVec(vector <int> &arr , int low,int high){
    if(low==high) return;
    int mid = (low+high)/2;
    mergeSortVec(arr ,low ,mid);
    mergeSortVec(arr,mid+1,high);
    margeVec(arr,low,mid,high);

}


//<-------------------------------------------------->
//by using array
void mergeArr(int arr[], int low ,int mid, int high){
    int left = low;
    int right = mid+1;
    int k=0;
    int temp[high-low+1];
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[k++] = arr[left++];
        }
        else{
            temp[k++]= arr[right++];
        }
    }
    while(left<=mid){
        temp[k++] = arr[left++];
    }
    while(right<=high){
        temp[k++]=arr[right++];
    }
    for(int i=low ; i<=high;i++){
        arr[i]=temp[i-low];
    }

}
void mergeSortArr(int arr[], int low,int high){
    if(low==high) return;
    int mid = (low+high)/2;
    mergeSortArr(arr , low ,mid);
    mergeSortArr(arr, mid+1,high);
    mergeArr(arr ,low,mid,high);
}
int main(){
    int n;
    cout<<"Enter the no. of element for an array:";
    cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    vector<int> arr;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }
    // mergeSortArr(arr , 0,n-1);
    mergeSortVec(arr , 0,n-1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}