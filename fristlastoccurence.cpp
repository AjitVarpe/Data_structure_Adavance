// int l = 0, r = n-1;

// int first,last;

// while(l<=r){
// 	mid = (l+r)/2;
// 	if(x=arr[mid]){
// 	 first = mid;
// 	 r = mid-1;
// 	}
// 	if(x>arr[mid]){
// 	 l = mid+1;
// 	} else {
// 	 r = mid-1;
// 	}
// }

// while(l<=r){
// 	mid = (l+r)/2;
// 	if(x=arr[mid]){
// 	 first = mid;
// 	 l = mid+1;
// 	}
// 	if(x>arr[mid]){
// 	 l = mid+1;
// 	} else {
// 	 r = mid-1;
// 	}
// }
// x == *

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int low,high,mid;
	low=0,high=n-1;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(a[mid]==x and (mid==0 or a[mid-1]<x))
		{
			first_occur=mid;
		}
		else if(a[mid]>=x)
		{
			right=mid-1;
		}
		else if(a[mid]<x)
		low=mid+1;
	}
	
	low=0,high=n-1;
		while(low<=high)
	{
		mid=low+(high-low)/2;
		if(a[mid]==x and (mid==n-1 or a[mid+1]>x))
		{
			last_occur=mid;
		}
		else if(a[mid]<=x)
		{
			right=mid-1;
		}
		else if(a[mid]>x)
		low=m
    }



// second ans 
int upper_bound(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int ans = 0;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == k ){
            ans = mid;
            e = mid - 1;
        }

        else if(arr[mid] > k){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}
int lower_bound(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int ans = 0;
    while(s <= e){
        int mid = s + (