
int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number to Check the Fibo Series :- "<<endl;
    cin>>n;
    cout<<"Fibonachi Number on that Perticular element is :- "<<fib(n);
    return 0;
}