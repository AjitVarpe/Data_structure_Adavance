#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
bool LinearSearch(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key) return 1;
    }
    return 0;
    
}
int main(){
    int arr[7] = {1 ,2,3,4,5,6,7};
    if(LinearSearch(arr,7,5)){
        cout<<"Element is Present in Array "<<endl;

    }else
    {
        cout<<"Element is Not Present in Array "<<endl;
    }
    


    return 0;
}