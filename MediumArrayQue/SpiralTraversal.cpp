#include<iostream>
using namespace std;
void spiralPrint(vector<vector<int>>& matrix){
    int n=matrix.size();
    int m = matrix[0].size();
    vector<int> ans;
    // left-> right -> top-> bottom->  right->left  ->bottom->top
    int left=0;
    int right=m-1;
    int top=0;
    int bottom =n-1;
    while(left<=right && top <=bottom){
        for(int i=left;i<=right;i++){
        ans.push_back(matrix[top][i]);
    }
    top++;
    for(int i=top;i<=bottom;i++){
        ans.push_back(matrix[i][right]);
    }
    right--;
    if (top <= bottom){
        for (int i = right; i >= left; i--){
            ans.push_back(matrix[bottom][i]);
        }
    }

    bottom--;
    if(left<=right){
        for(int i=bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
    }
    
    left++;
    }
    for(int  i=0;i<n*m;i++){
        cout<<ans[i]<<" ";
    }
    
}
int main(){
    vector<vector<int>> matrix ={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
    
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    spiralPrint(matrix);
    return 0;
}