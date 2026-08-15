#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // int a[] = {5, 2, 9, 1, 5, 6};
    // int n = sizeof(a)/sizeof(a[0]);
    vector<int> v={5, 2, 9, 1, 5, 6};
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}