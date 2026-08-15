#include<iostream>
using namespace std;
int main(){
    pair<int , pair<int,char> > p = {1 ,{2,'A'}};
    cout<<p.first <<" "<< p.second.second;
    cout<<endl;
    pair<int,int> arr[]={{1,3} , {2,4}, {3 ,5}};
    cout<<arr[ 5].second;
}