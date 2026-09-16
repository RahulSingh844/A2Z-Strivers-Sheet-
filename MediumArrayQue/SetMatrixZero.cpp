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

//Better Approach
void set3(vector<vector<int>> &mat){
    int n=mat.size();
    int m=mat[0].size();
    vector<int> row(n,0);
    vector<int> col(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]){
                mat[i][j]=0;
            }
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}
// optimal approach
void OptimalApproach(vector<vector<int>> &mat){
    int n=mat.size();
    int m=mat[0].size();
    int col0=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                mat[i][0]=0;//row
                if(j!=0){
                    mat[0][j]=0;//col
                }
                else col0=0;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(mat[i][j]!=0){
                if(mat[i][0]==0 || mat[0][j]==0){
                    mat[i][j]=0;
                }
            }
        }
    }
    if(mat[0][0]==0){
        for(int j=0;j<m;j++) mat[0][j]=0;
    }
    if(col0==0){
        for(int i=0;i<n;i++) mat[i][0]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
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
    // set3(mat);
    OptimalApproach(mat);
    // cout<<"Lal bale sir :"<<endl;
    // set1(mat);
    return 0;
}
