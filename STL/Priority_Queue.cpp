#include<iostream>
#include<queue>
using namespace std;
int main(){
    // Creating a priority queue in increasing order
    // By default, priority queue is a max heap
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(15);
    pq.emplace(5);
    pq.emplace(25);
    cout<<"Size of priority queue: "<<pq.size()<<endl;
    // Displaying the elements of priority queue
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    //min heap
    // creating a priority queue in decreasing order
    priority_queue<int , vector<int> ,greater<int> > pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.push(15);
    pq1.emplace(5);
    pq1.emplace(25);
    cout<<"Size of priority queue: "<<pq1.size()<<endl;
    // Displaying the elements of priority queue
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;
    
    return 0;
}