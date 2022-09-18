#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
int binarySearch(int arr[], int size, int element)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        
        
        // this condition will overflow when we r having 2^31-1 size of index in start and end so we cant store the max element in int
        // int mid = (start + end) / 2;

        //  So the Smartest Move will be the 
        int mid = start + (end -start)/2;

        if (arr[mid] == element)
            return mid;
        if (arr[mid] > element)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
int main()
{
    int oddarray[6] = {1, 2, 3, 4, 5, 6};
    int evenarray[6] = {10, 20, 30, 40, 50, 60};

    cout << " the Index of the 5 element is " << binarySearch(oddarray, 6, 5) << endl;

    return 0;
}