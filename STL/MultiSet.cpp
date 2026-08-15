#include<iostream>
#include<set>
using namespace std;
int main
(){
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(10);
    ms.insert(15);
    ms.insert(25);
    ms.insert(5);
    for(auto it: ms)
    {
        cout<<" "<<it<<" ";
    }
    // Size of the multiset after inserting elements
    cout<<"size: "<<ms.size()<<endl;

    ms.erase(ms.find(10));
    // Counting the number of occurrences of 10 in the multiset
    int is = ms.count(10);
    cout<<is<<endl;


    // Finding the first occurrence of 10 in the multiset
    auto it = ms.find(10);


    // Erasing the first occurrence of 10 from the multiset
    ms.erase(10);
    cout<<*it<<endl;
    // Counting the number of occurrences of 10 in the multiset after erasing one occurrence
    int is1 = ms.count(10);
    cout<<is1<<endl;
    cout<<"size: "<<ms.size()<<endl;
    for(auto it: ms)
    {
        cout<<it<<" ";
    }
    
}