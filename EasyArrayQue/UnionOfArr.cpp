#include<iostream>
using namespace std;
#include<set>
void UnionOfArrOPT(vector <int> &arr1,vector <int> &arr2){
    int n=arr1.size();
    int m=arr2.size();
    int i,j=0;
    vector<int> unionArr;
    while(i<n&&j<m){
        if(arr1[i]<=arr2[j]){
            if(unionArr.size()==0||unionArr.back() !=arr1[i]){
                unionArr.push_back(arr1[i]);               
            }
            i++;
        }
        else{
            if(unionArr.size()==0||unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j<m){
        if(unionArr.back()!=arr2[j]){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    while(i<n){
        if(unionArr.back()!=arr1[i]){
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    for(int i=0;i<unionArr.size();i++){
        cout<<unionArr[i]<<" ";
    }

}
void UnionOfArr(vector <int> &arr1,vector <int> &arr2 ,set<int> &brr){
    
    for(int i=0;i<arr1.size();i++){
        brr.insert(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        brr.insert(arr2[i]);
    }
   

}
int main(){
    int a,b;
    cout<<"Enter the no of elements in 1st array";
    cin>>a;
    cout<<"Enter the no of elements in 2nd array";
    cin>>b;
    vector <int> arr1;
    vector <int> arr2;
    set<int> brr;
    cout<<"Enter Elements";
    for(int i=0;i<a;i++){
        int c;
        cin>>c;
        arr1.push_back(c);
    }
    cout<<"Enter Elements";
    for(int i=0;i<b;i++){
        int c;
        cin>>c;
        arr2.push_back(c);
    }
    UnionOfArrOPT(arr1,arr2);
    // for(auto it:brr){
    //     cout<<it<<" ";
    // }
    
}