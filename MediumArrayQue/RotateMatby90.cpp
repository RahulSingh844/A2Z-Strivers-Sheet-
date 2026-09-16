#include<iostream>
using namespace std;
void rotate(vector<vector<int>>&matrix) {
    int n=matrix.size();
    vector<vector<int>> ans(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-1-i]=matrix[i][j];
        }
    }
    cout<<"Rotated Matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
     
}

int main(){
    vector<vector<int>> matrix = {{1 ,2 ,3 ,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=matrix.size();
    cout<<"Original Matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    rotate(matrix);
    return 0;
}