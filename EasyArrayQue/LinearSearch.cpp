#include<iostream>
using namespace std;
int LinearSearch(vector<int> arr,int k){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==k){
            return i;
            break;
        }
    }
    return -1;
}
int main (){
    int n,k;
    cout<<"Enter the no element in arrray";
    cin>>n;
    cout<<"Enter the element to search ";
    cin>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }
    int index = LinearSearch(arr,k);
    if(index==-1){
        cout<<"Element not found";
        return 0;
    }
    cout<<"Element found at index "<<index;
}