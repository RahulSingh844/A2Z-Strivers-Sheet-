#include<iostream>
using namespace std;
int BruteBuySell(vector <int> arr){
    int maxprofit=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int profit=arr[j]-arr[i];
            maxprofit=max(maxprofit,profit);
        }
    }
    return maxprofit;
}
int opt(vector <int> arr){
    int n=arr.size();
    int maxprofit=0;
    int i=0;
    int j=i+1;
    while(j<n){
        
            if(arr[i]>arr[j]){
                i=j;
                j=i+1;
            }
            int profit=arr[j]-arr[i];
            maxprofit=max(maxprofit,profit);
            j++;
        
    }
    return maxprofit;
}
int opt2(vector <int> arr){
    int maxprofit =0;
    int n=arr.size();
    int mini=arr[0];
    for(int i=1;i<n;i++){
        int profit=arr[i]-mini;
        maxprofit = max(maxprofit,profit);
        mini= min(mini,arr[i]);
    }
    return maxprofit;
}
int main(){
    vector <int> arr={1,7,1,5,3,1,4};
    cout<<BruteBuySell(arr);
    cout<<endl<<opt(arr);
    cout<<endl<<opt2(arr);
}
