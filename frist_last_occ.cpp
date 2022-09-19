#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
int frist_occ(int arr[],int size,int element){
    int s =0,e = size -1,ans;
    while(s<=e){
        int mid  = s +(e-s)/2;
        if(arr[mid]==element){
            ans = mid;
            e = mid-1;
        }else if(arr[mid]>element){
            e = mid - 1;
        }
        else
        s = mid +1;
    }
    return ans;

}
int last_occ(int arr[],int size,int element){
    int s =0,e = size -1,ans;
    while(s<=e){
        int mid  = s +(e-s)/2;
        if(arr[mid]==element){
            ans = mid;
            s = mid+1;
        }else if(arr[mid]>element){
            e = mid - 1;
        }
        else
        s = mid +1;
    }
    return ans;

}
int main(){
    
    int arr[10] = {1,2,3,3,3,3,3,3,5,4};
    cout<<"The first occurence of the 3 element is "<<frist_occ(arr,10,3);

    cout<<endl;
    cout<<"the last occurence of the index is at index "<<last_occ(arr,10,3);

    return 0;
}