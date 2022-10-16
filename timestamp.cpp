#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
int countTime(string time)
{
    int counter[4] = {1, 1, 1, 1};

    if (time[0] == '?' && time[1] == '?')
    {
        counter[0] = 24;
        counter[1] = 1;
    }
    else
    {
        if (time[0] == '?' && time[1] < 4)
            {counter[0] = 3;}
            else{
            counter[0]=2;
            }
        if (time[1] == '?')
            counter[1] = 10;
    }

    if (time[3] == '?')
    {
        counter[2] = 6;
    }
    if (time[4] == '?')
    {
        counter[3] = 10;
    }
    cout << counter[0] << endl;
    cout << counter[1] << endl;
    cout << counter[2] << endl;
    cout << counter[3] << endl;
    int total = counter[0] * counter[1] * counter[2] * counter[3];

    return total;
}
int main()
{
    string time;
    cin >> time;
    cout << countTime(time);
    return 0;
}