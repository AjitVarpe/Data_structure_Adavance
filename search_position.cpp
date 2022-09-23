#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
int search_position(int arr[], int size, int target)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (target > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid+ 1;
        }
    }
    return s;
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"The Target can be inserted at "<<search_position(arr,10,2);
    return 0;
}