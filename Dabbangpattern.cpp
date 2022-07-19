#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
      
        int count = 1;
        int start = n - i + 1;
        int end = n - i + 1;
        while (start--)
        {
            cout << count << " ";
            if (start)
            {
                count++;
            }
        }
        int star = (i - 1) * 2;
        while (star--)
        {
            cout << "* ";
        }
        while (end--)
        {
            cout << count-- << " ";
        }
        cout << endl;
        i++;
    }

    return 0;
}