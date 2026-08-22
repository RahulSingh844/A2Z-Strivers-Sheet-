#include<iostream>
using namespace std;
// optimal approach
int SecondLargest(vector <int> &arr){
    int max=arr[0];
    int secondlargest = -1;
    for(int i=0;i<arr.size();i++){
        if(max<arr[i]){
            secondlargest = max;
            max=arr[i];
        }
        else if(arr[i]<max && secondlargest < arr[i]){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
    
}

// brute approach
int SecondlargestBrute(vector <int> &arr){
    sort(arr.begin(),arr.end()); // sort the array Time Complexity = O(nlogn)
    return arr[arr.size()-2];
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
    cout<<SecondLargest(arr);

}