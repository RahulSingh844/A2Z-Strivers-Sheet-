#include<iostream>
using namespace std;
void rearrangeBetter(vector<int> &arr){
    int n = arr.size();
    vector<int> negative;
    vector<int> positive;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive.push_back(arr[i]);
        }
        else negative.push_back(arr[i]);
    }
    for(int i=0;i<n/2;i++){
        arr[2*i]=positive[i];
        arr[2*i+1]= negative[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void rearrangeOptimal(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n,0);
    int posIndex=0;
    int negIndex=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[posIndex]=arr[i];
            posIndex+=2;
        }
        else {
            ans[negIndex]=arr[i];
            negIndex+=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
void secondVariant(vector<int> &arr){
    int n = arr.size();
    vector<int> negative;
    vector<int> positive;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive.push_back(arr[i]);
        }
        else negative.push_back(arr[i]);
    }
    if(negative.size()<positive.size()){
        for(int i=0;i<negative.size();i++){
            arr[2*i]=positive[i];
            arr[2*i+1]=negative[i];
        }
        int index = 2*negative.size();
        for(int i=negative.size();i<positive.size();i++){
            arr[index]=positive[i];
            index++;
        }
    }
    else{
        for(int i=0;i<positive.size();i++){
            arr[2*i]=positive[i];
            arr[2*i+1]=negative[i];
        }
        int index = 2*positive.size();
        for(int i=positive.size();i<negative.size();i++){
            arr[index]=negative[i];
            index++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr={-1, -3, -7, 9, 8, 6 ,-4, -2, -5,-6,-8,-9};
    // rearrangeBetter(arr);
    // cout<<"Optimal"<<endl;
    // rearrangeOptimal(arr);
    // cout<<"Second Variant"<<endl;
    secondVariant(arr);
}