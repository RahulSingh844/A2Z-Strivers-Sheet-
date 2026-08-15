#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[13] ={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] = hash[arr[i]]+1;
    }
    int q;
    cout<<"Enter the numbers to find thier no.:";
    cin>>q;
    while(q>0){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
        q--;
    }
}