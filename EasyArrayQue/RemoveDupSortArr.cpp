#include<iostream>
#include<set>
using namespace std;

void RemoveDupSortArrbySTL(vector <int> arr){
    // remove duplicates by stl algorithm
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
//Brute approach
void RemoveDupSortArrBySet(vector <int> arr){
    set<int> s;
    for(int i=0;i<arr.size();i++){  
        s.insert(arr[i]); // TC = O(nlogn)
    }
    int index=0;
    for(auto it:s){  // TC = O(n) if all elements are unique
        arr[index] = it;
        cout<<arr[index]<<" ";
        index++;
    }
}

// Optimal approach
void RemoveDupSortArrOpt(vector <int> arr){
    int i=0;
    for(int j=1;j<arr.size();j++){ // tc = O(n)
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    for(int k=0;k<i+1;k++){
        cout<<arr[k]<<" ";
    }
    
}
int main(){
    int n;
    cout<<"Enter the no element in array:";
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        arr.push_back(c);
    }
    RemoveDupSortArrOpt(arr);


}