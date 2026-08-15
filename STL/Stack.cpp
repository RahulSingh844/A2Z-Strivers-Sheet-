#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(9);
    s.emplace(2);
    s.emplace(3);
    s.push(4);
    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    stack<int> s1;
    s1.swap(s);
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
}
