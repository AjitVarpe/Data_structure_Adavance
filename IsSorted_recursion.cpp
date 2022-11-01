bool IsSorted(int *arr,int size){
    // Base Case
    if(size==0 || size == 1){
        return true;
    }
    if(arr[0] >= arr[1])
    { 
        return false;
    }else
    {
        return IsSorted(arr+1,size-1);
    }

}
#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    if(IsSorted(arr,size)){
        cout<<"Array is Sorted "<<endl;
    }else {
        cout<<"Array is Not Sorted "<<endl;
    }

    return 0;
}