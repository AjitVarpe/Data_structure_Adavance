#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
int findmid(int arr[],int size){
    int s=0,e=size-1;
    int mid = s + (e-s)/2;
    while(s < e){

        //  1 2 3 4 5 6 7
        if(arr[mid] >= arr[9]){
            s = mid +1;
        }else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    // int arr[10] ={7,8,9,10,1,2,3,4,5,6};
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};

    cout<<"The output is "<<findmid(arr,10);

// the given code is the output of the question number 153  medium level hardness

    return 0;
}