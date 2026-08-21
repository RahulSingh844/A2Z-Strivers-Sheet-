#include<iostream>
using namespace std;

// optimal approach My approach
// Time Complexity = O(n)
// Space Complexity = O(1)
int largest(vector <int> &arr){
    int max;
    max=arr[0];
    for(int i=0;i<arr.size();i++){
        
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

// Brute Force approach
// Time Complexity = O(nlogn)
// Space Complexity = O(1)

int largestBrute(vector <int> &arr){
    sort(arr.begin(),arr.end()); // sort the array Time Complexity = O(nlogn)
    return arr[arr.size()-1];
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
    cout<<largestBrute(arr);

}