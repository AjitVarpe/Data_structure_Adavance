#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
void ReverseArray(int arr[],int size){
    int start = 0,end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int main(){
    int count;
    cin>>count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    cout<<"Reverse array is "<<endl;
    ReverseArray(arr,count);
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<", ";

    }
    
    


    return 0;
}