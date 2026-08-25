#include<iostream>
using namespace std;
// optimal approach
int movezero(vector<int> &arr,int n){
    int j=-1;
   for(int i=0;i<n;i++){
    if(arr[i]==0){
        j=i;
        break;
    }
   }
   
   for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
   }
   return 1;
}
int main()
{
    int n;
    cout<<"Enter the no element in array:";
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        arr.push_back(p);
    }
    
    // int count=0;
    // vector<int> temp;
    // for(int i=0;i<n;i++){
        
    //     if(arr[i]!=0){
    //         temp.push_back(arr[i]);
    //         // count++;
    //     }
        

    // }
    // for(int i=0;i<temp.size();i++){
    //     arr[i]=temp[i];
    // }
    // for(int i=temp.size();i<n;i++){
    //     arr[i]=0;
    // }
    int k=movezero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}