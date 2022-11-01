int Sum(int *arr,int size){
    // Base Case
    if(size==0){
        return -1;
    }
    if(size==1){
        return arr[0];
    }
    return arr[0] + Sum(arr+1,size-1);
}

#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int arr[5] = {5,10,15,20,25};
    int size = 5;
    cout<<"Sum is "<<Sum(arr,size);


    return 0;
}