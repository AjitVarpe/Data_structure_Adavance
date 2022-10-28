#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
int factorial(int num)
{
    // base case Mandatory
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }
    return factorial(num - 1) + factorial(num - 2);
}
int main()
{

    int number;
    cout<<"Enter the Number to find out the factorial of that position "<<endl;
    cin>>number;
    cout<<factorial(number);
    

        return 0;
}