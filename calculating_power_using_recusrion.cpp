int power(int a, int b)
{
    // Base Case
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    // Recursive Relation
    int ans = power(a, b / 2);
    if (b & 1)
    // when number is odd
    {
        return a * ans * ans;
    }
    else
    // when number is odd
    {
        return ans * ans;
    }
}

#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Power of a : "<<a <<" to b is "<<b <<endl<<power(a,b);
    return 0;
}