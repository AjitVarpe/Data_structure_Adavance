#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
int iselement(int *arr,int size,int key){
    if(size==0){
        return -1;
    }
    if(arr[0]==key){
        return key;
    }else{
        return iselement(arr+1,size-1,key);
    }
}
int main(){
    int arr[5] = {5,10,15,20,25};
    int size = 5;
    int key = 10;
    cout<<"Element is Found "<<iselement(arr,size,key)<<endl;
    return 0;
}