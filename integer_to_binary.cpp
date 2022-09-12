#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1; // this will check last bit of number and gives apropritate ans
        ans = ans + (bit * pow(10, i));
        n = n >> 1;
        i++;
    }
    cout << "Ans is " << ans << endl;

    return 0;
}