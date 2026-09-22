#include<iostream>
using namespace std;
bool ls(vector <int> &arr,int num){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return true;
        }
    }
    return false;
}
void bruteForce(vector <int> &arr){
    int largest = 1;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int x=arr[i];
        int count=1;
        while(ls(arr,x+1)){
            x++;
            count++;
        }
        largest=max(largest,count);
    }
    cout<<largest;
}
//Better approach with my approach
void maxConsecutiveSeq(vector <int> &arr){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int maxcount =0;
    int count=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]+1 == arr[i+1]){
            count++;
            maxcount =max(maxcount ,count);
        }
        else if(arr[i]==arr[i+1]){
            continue;
        }
        else count =1;
    }
    cout << maxcount<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
//Better approach of lal bale sir🫡

int main(){
    vector<int> arr = {101, 102, 1, 1, 3, 4, 6, 5, 105, 1, 106, 106, 108, 106, 107, 2};
    bruteForce(arr);
}