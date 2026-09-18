#include<iostream>
using namespace std;
void leaders(vector <int> arr){
    int n=arr.size();
    vector<int> ans;
    // int last = arr[n-1];
    // int ind=0;
    for(int i=0;i<n;i++){
        int leader =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                leader=0;
                break;
            }
        }
        if(leader==1){
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
void opt(vector<int> &arr){
    int n=arr.size();
    vector<int>ans;
    int maxright = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=maxright){
            ans.push_back(arr[i]);
            maxright=arr[i];
        }
    }
    cout<<"Best opt :";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}


void myopt(vector<int> &arr){
    int n=arr.size();
    vector<int>ans;
    int j=n-1;
    int maxright = arr[n-1];
    while(j>=0){
        if(arr[j]>=maxright){
            ans.push_back(arr[j]);
            maxright=arr[j];
        }
        j--;
    }
    cout<<"my optimal ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector <int> arr={18,17,4,3,2,3,1};
    leaders(arr);
    myopt(arr);
    opt(arr);
}