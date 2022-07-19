#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character or Numerical value :- ";
    cin >> ch;
    int a = int(ch);
    if (a >= 48 && a <= 57)
    {
        cout << "given input is integer";
    }
    if (a >= 65 && 90 <= a)
    {
        cout << "given input is Capital Character ";
    }
    if (a >= 97 && 122 <= a)
    {
        cout << "given input is smallcase Character ";
    }
   

    return 0;
}