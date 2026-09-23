#include<iostream>
using namespace std;
//Question 1 :- Given row and col then print the element of that row and col
void print( int n , int r){
    int ans=1;
    for(int i=0;i<r;i++){
        ans=ans*(n-i);
        ans=ans/(i+1);
    }
    cout<<ans;
}
//Question 2 :- given row number then print the whole row
void printwhole(int n){
    vector<int> ans;
    ans.push_back(1);
    int c=1;
    for(int i=0;i<n;i++){
        c=c*(n-i);
        c=c/(i+1);
        ans.push_back(c);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
//Question 3 :- given n then print the whole triangle
vector<int> genrateTrianle(int row){
    vector<int> ans;
    ans.push_back(1);
    int c=1;
    for(int i=1;i<row;i++){
        c=c*(row-i);
        c=c/(i);
        ans.push_back(c);
    }
    return ans;
}
void printTriangle(int row){
    vector<vector<int>> pascal;
    for(int i=1;i<=row;i++){
        vector<int> temp = genrateTrianle(i);
        pascal.push_back(temp);
    }
    for(int i=0;i<pascal.size();i++){
        for(int j=0;j<pascal[i].size();j++){
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int row=6,col=3;
    // cout<<"Enter the row: ";
    // cin>>row;
    // cout<<"Enter the col: ";
    // cin>>col;
    printTriangle(row);
}