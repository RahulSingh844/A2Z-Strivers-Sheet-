#include<iostream>
using namespace std;
// forword recursion
void printnum_1_to_nF(int n ,int count){
    if(n>count){
        return;
    }
    cout<<" "<<n<<" "; 
    printnum_1_to_nF(n+1 , count);
   
}

// backward recursion
void printnum_1_to_nB(int n ){
    if(n<1){
        return;
    }
    printnum_1_to_nB(n-1);
    cout<<" "<<n; 
}
//forward recursion
void printnum_N_to_1F(int n){
    if(n<1){
        return;
    }
    cout<<" "<<n<<" ";
    printnum_N_to_1F(n-1);
    
}
void printnum_N_to_1B(int i , int n){
    if(i > n){
        return;
    }
    printnum_N_to_1B(i+1 , n);
    cout<<" "<<i<<" ";
}

//backward recursion
int main(){
    int n;
    cout<<"Enter n.";
    cin>>n;
    cout<<"Forward Recursion 1 to n";
    printnum_1_to_nF(1,n);
    cout<<endl;
    cout<<"Backward Recursion 1 to n";
    printnum_1_to_nB(n);
    cout<<endl;
    cout<<"Forward Recursion n to 1";
    printnum_N_to_1F(n);
    cout<<endl;
    cout<<"Backward Recursion n to 1";
    printnum_N_to_1B(1,n);
    cout<<endl;

}