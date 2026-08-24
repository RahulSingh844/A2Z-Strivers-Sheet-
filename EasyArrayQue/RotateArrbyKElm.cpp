#include<iostream>
using namespace std;
void RotateArrbyK(vector <int> &arr , int d){
    d = d%arr.size();
    int temp[d];
    //Storing
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    //Shifting
    for(int i=(d);i<arr.size();i++){
        arr[i-(d)]=arr[i];
    }
    //Inserting
    for(int i=0;i<d;i++){
        arr[arr.size()-(d)+i]=temp[i];
    }
    //Printing
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
// Optimal approach by using reverse STL
void RotateArrbyKOpt(vector <int> &arr , int k){
    k=k%arr.size();
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
// Optimal approach by using swap
void reverse(vector<int> &arr,int start,int end){
    while (start<end)   
    {
        swap(arr[start++] , arr[end--]);
        
    }
    
    
}
int main(){
    int n,k;
    cout<<"Enter the no element in array:";
    cin>>n;
    
    cout<<"Enter the Rotate index";
    cin>>k;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        arr.push_back(c);
    }
    reverse(arr , 0,k-1);
    reverse(arr , k,n-1);
    reverse(arr , 0,n-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}