#include<iostream>
using namespace std;
// Time Complexity of Bubble Sort
// Worst Case: O(n^2)
// Best Case: O(n) while using flag
// Average Case: O(n^2)
void BubbleSort(int arr[], int n){
    int flag = 0;
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag = 1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==0){
            break;
        }
    }
}
//Time Complexity of Selection Sort
// Worst Case: O(n^2)
// Best Case: O(n^2)
// Average Case: O(n^2)
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int max = i;
        for(int j = i+1;j<n;j++){
            if(arr[max]<arr[j]){
                max=j;
            }
            
        }
        swap(arr[i],arr[max]);
    }
}
//Time Complexity of Insertion Sort
// Worst Case: O(n^2)
// Best Case: O(n)
// Average Case: O(n^2)
void insertionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
         int j=i;
         while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
         }
    }
}
int main(){
    int n;
    cout<<"Enter tne no.of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // selectionSort(arr,n);
    // BubbleSort(arr,n);
    insertionSort(arr , n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
