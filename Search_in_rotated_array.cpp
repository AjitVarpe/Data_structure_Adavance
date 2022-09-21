// 33. Search in Rotated Sorted Array
// Medium

// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
int findelement(int arr[], int size, int target)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        //  1 2 3 4 5 6 7
        if (arr[mid] >= arr[9])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

//  Another solution

// binary_search.
int l = 0, r = nums.size() - 1;
while (l <= r)
{
    int mid = l + (r - l) / 2; // calculate mid
    if (nums[mid] == target)   // check if mid element is target element.
    {
        return mid;
    }
    else if (nums[mid] > target) // check if mid ele is greater than target
    {
        // 2 possibilities either rotation has started from mid | before mid or from after mid
        if (nums[l] > nums[mid] || nums[l] <= target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    else
    {
        if (nums[l] <= nums[mid] || nums[l] > target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
}
return -1;

int main()
{
    int nums[7] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << "The Element which we is looking is" << findelement(nums, 7, 0);

    return 0;
}