#include<iostream>
using namespace std;
void BruteAppMissingNum(int arr[],int n){
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"The missing number is: "<<i<<endl;
        }
    }
}
void BetterAppMissingNum(int arr[], int n){
    vector<int> hash(n+1,0);
    for(int i=0;i<n-1;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==0){
            cout<<"The missing number is: "<<i<<endl;
            break;
        }
    }
}
void OptimalAppMissingNum(int arr[],int n){
    int Osum= n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum = arr[i]+sum;
    }
    cout<<"The missing number iis: "<<Osum-sum<<endl;
}
void optimalUsingXOR(int arr[],int n){
    int xor1=0,xor2=0;
    for(int i=0;i<n-1;i++){
        xor1=xor1^(i+1);
        xor2=xor2^arr[i];
    }
    xor1 = xor1^n;
    
    cout<<"The missing number is: " <<(xor1^xor2);
    
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout << "Enter " << n-1 << " elements: ";
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    optimalUsingXOR(arr, n);
    return 0;


}