#include<iostream>
using namespace std;
void armstrong(int n){
    int dup = n;
    int k=0;
    int arms=0;
    while(n>0){
        n = n/10;
        k++;
    }
    n=dup;
    while(n>0){
        int last = n%10;
        arms = arms + (pow(last ,k));
        n=n/10;

    }
    if(arms == dup){
        cout<<"Yes";
    }
    else{
        cout<<"no";
    }

}

int main (){
    int n;
    cout<<"Enter the No.";
    cin>>n;
    armstrong(n);

}