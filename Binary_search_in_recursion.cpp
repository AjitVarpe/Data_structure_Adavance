bool binary_search(int *arr,int s,int e,int key){
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid] > key){
        return binary_search(arr,s,mid-1,key); }
    else{
        return binary_search(arr,mid+1,e,key);
    }
    }

    #include<bits/stdc++.h>
    #include<limits>
    #include<String>
    using namespace std;
    
    int main(){
        int arr[5] = {5,10,15,20,25};
        int size = 5;

        cout<<"the Element is Found "<<binary_search(arr,0,size-1,25);


    
    
        return 0;
    }