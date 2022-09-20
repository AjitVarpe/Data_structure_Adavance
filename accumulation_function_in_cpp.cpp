#include<bits/stdc++.h>
#include<limits>
#include<String>
// #include<math>
using namespace std;

int main(){
    int arr[11]={1,2,3,4,5,6,7,8,9,10,10};


    cout<<"Sum of the Given Array is "<<accumulate(arr,arr+11,0);


    return 0;
}