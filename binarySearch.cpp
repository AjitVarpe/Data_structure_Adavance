#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
int binarySearch(int arr[],int size,int element){
    int start = 0, end =size-1;
    while(start<=end){
        int mid = (start + end) /2;
        if(arr[mid]==element)
        return mid;
        if(arr[mid]>element) end = mid -1;
        else
        start = mid +1;
    }
    return -1;
}
int main(){
    int oddarray[6] = {1,2 ,3 ,4,5,6};
    int evenarray[6] = {10,20,30,40,50,60};

    cout<<" the Index of the 5 element is "<<binarySearch(oddarray,6,5)<<endl;

    


    return 0;
}