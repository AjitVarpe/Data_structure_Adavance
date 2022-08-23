#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
#include <set>
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(50);
    s.insert(50);
    s.insert(50);
    s.insert(60);
    s.insert(60);
    s.insert(60);

    for (auto i : s)
    {
        cout<<i<<endl;
    }
    cout<<endl;

    return 0;
}