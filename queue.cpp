#include <bits/stdc++.h>
#include <limits>
#include <String>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(120);
    q.push(130);
    q.push(180);
    q.push(170);

    cout<<"First element is "<<q.front()<<endl<<"The size of stack is ";
    cout<<q.size();
    q.pop();
    q.pop();
    cout<<endl<<"After poping elements the remaining size is ";
    cout<<q.size();
    return 0;
}