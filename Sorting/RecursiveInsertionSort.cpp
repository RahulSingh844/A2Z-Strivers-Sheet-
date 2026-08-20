#include<iostream>
using namespace std;

void insertionSort(vector <int> &arr , int n ,int i){
    if(i<n){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
        insertionSort(arr , n ,i+1);
    }
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
    insertionSort(arr , n ,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}