#include<iostream>
using namespace std;
void rightRotate(vector <int> &arr , int k){
    k=k%arr.size();
    reverse(arr.begin()+(arr.size()-k)  ,   arr.end());
    reverse(arr.begin()                 ,   arr.begin()+(arr.size()-k));
    reverse(arr.begin()                 ,   arr.end());
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
    rightRotate(arr,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}