#include<iostream>
using namespace std;
void(IntersecOfArr(vector <int> &arr1,vector <int> &arr2)){
    int n1=arr1.size();
    int n2=arr2.size();
    int i=0,j=0;
    vector<int>Intersection;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            Intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int i=0;i<Intersection.size();i++){
        cout<<Intersection[i]<<" ";
    }
}
int main()
{
    int n1,n2;
    cout<<"Enter the no of elements in 1st array";
    cin>>n1;
    cout<<"Enter the no of elements in 2nd array";
    cin>>n2;
    vector <int> arr1;
    vector <int> arr2;
    cout<<"Enter Elements";
    for(int i=0;i<n1;i++){
        int c;
        cin>>c;
        arr1.push_back(c);
    }
    cout<<"Enter Elements";
    for(int i=0;i<n2;i++){
        int c;
        cin>>c;
        arr2.push_back(c);
    }
    IntersecOfArr(arr1,arr2);
}