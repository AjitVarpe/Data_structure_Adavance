// iterators in vector        begin end  // cbegin cend // rbegin and rend   // crbegin and crend
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> g1;
    for (auto i = 1; i <= 5; i++)
    {
        g1.push_back(i);
    }

    for (auto i = g1.begin(); i != g1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout<<endl;
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
    {
        cout<<*i<<" ";
    }
    
    return 0;
}
