#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int size = 4;
    auto target = 11;
    int arr[size]={2,5,9,11};
    int left=0,right = size-1;
    while (left < right)
    {
        int current = arr[left] + arr[right];
        if(current == target){
            break;
        }
        if(current> target){
            right = right -1;
        }
        else{
            left = left+ 1;
        }
    }
    cout<<left<<" "<<right;
    
    return 0;
}