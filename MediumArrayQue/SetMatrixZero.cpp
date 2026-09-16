#include<iostream>
using namespace std;
//My Approach
void set(vector<vector<int>> &mat){
    int n=mat.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if (mat[i][j] == 0){
                    for (int k = 0; k < n; k++){
                        if (mat[i][k] != 0)
                            mat[i][k] = -1;

                        if (mat[k][j] != 0)
                            mat[k][j] = -1;
                    }
                }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==-1){
                mat[i][j]=0;
            }
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}


//lal bale sir ki brute approach
void row(vector<vector<int>> &mat, int row){
    int n = mat.size();
    for(int i=0;i<n;i++){
        if(mat[row][i]!=0){
            mat[row][i]=-1;
        }
        
    }
}
void col(vector<vector<int>> &mat, int col){
    int m=mat.size();
    for(int j=0;j<m;j++){
        if(mat[j][col]!=0){
            mat[j][col]=-1;
        }
        
    }
}
void set1(vector<vector<int>> &mat){
    int n=mat.size(); // rows
    int m=mat[0].size(); //colums
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                row(mat,i);
                col(mat,j);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==-1){
                mat[i][j]=0;
            }
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    vector<vector<int>> mat={{1,1,1,1,0},{1,1,1,0,1},{1,0,1,1,1},{1,1,1,0,1},{1,1,1,1,1}};
    cout<<endl<<"Original matrix:"<<endl;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // set(mat);
    cout<<"Lal bale sir :"<<endl;
    set1(mat);
    return 0;
}
