#include<iostream>
using namespace std;
void reverse(int l ,int arr[] ,int n){
    if(l>=n/2){
        return;
    }
    swap(arr[l],arr[n-l-1]);
    reverse(l+1,arr,n);
    
}
int main(){
    int n;
    cout<<"Enter a no.";
    cin>>n;
    int arr[]= {1,2,3,4,5};
    reverse(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}