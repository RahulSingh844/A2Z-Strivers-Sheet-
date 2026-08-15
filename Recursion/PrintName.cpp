#include<iostream>
using namespace std;

void printName(string name , int count, int a){
    if(count == a ) return;

    cout<<name<<" ";
    printName(name , count+1 ,a);
}
int main(){
    string name;
    cout<<"Enter name";
    cin>>name;
    int n;
    cout<<"Enter no.";
    cin>>n;
    printName(name , 0 , n);
    return 0;
}