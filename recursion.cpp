#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
int sum_n(int n)
{
    // Base Case
    if (n == 0)
    {
        return 0;
    }
    return n + sum_n(n - 1);
}
void pattern_print(int n,int b)
{
    if (n == 1)
    {
        cout<<1<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
    }
    for (int i = 1; i < 2 * b-n; i++)
    {
        cout<<"  ";
    }
    
     for (int i = 0; i < n; i++)
    {
        cout << b - i - 1<< " ";
    }
    cout << endl;

    pattern_print(n - 1,b);
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;

}
int main()
{
    // cout<<"The Sum Of the given number is "<<sum_n(10);
    pattern_print(10,10);

    return 0;
}