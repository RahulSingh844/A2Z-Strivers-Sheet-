#include<iostream>
using namespace std;

// My approach TC = O(n^2)
// space complexity = O(n)
void bubbleSort(vector <int> &arr , int n ,int i){
    if(i<n-1){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        i++;
        bubbleSort(arr , n ,i);
    }
}


// Better approach TC = O(n^2)
// space complexity = O(n)
void bubbleSortBetter(vector <int> &arr , int n){
    if(n==1) return;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        bubbleSortBetter(arr , n-1);
    
}

int main ( ){
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }
    // bubbleSort(arr , n ,0);
    bubbleSortBetter(arr , n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}