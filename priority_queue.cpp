#include <bits/stdc++.h>
#include <limits>
#include <String>
#include <queue>
using namespace std;

// what all operation queue does contain
// push,pop,top,size,empty,swap,emplace

int main()
{

    // Maxx heap priority
    priority_queue<int> que;
    priority_queue<int,vector<int>,greater<int>> min_que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    que.push(60);

    priority_queue<int,vector<int>,greater<int>> mini_priority;
    priority_queue<int,vector<int>,greater<int>> mi_priority;
    
    // min heap priority queue
    priority_queue<int, vector<int>, greater<int>> mini;
    mini.push(100);
    mini.push(200);
    mini.push(300);
    mini.push(400);
    mini.push(500);

    // Adding size of  mini and maxi queue size in a container
    cout<<"Elements of the mini priority Queues :-> "<<endl;
    int m =mini.size();
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<endl;
        mini.pop();
    }
    cout<<"Enelemt of the max Priority Queue :->"<<endl;
    int maxi = que.size();
     for (int i = 0; i < maxi; i++)
    {
        cout<<que.top()<<endl;
        que.pop();
    }
    
    return 0;
}