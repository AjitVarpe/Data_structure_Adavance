#include<bits/stdc++.h>
#include<limits>
#include<String>
#define size 100
#define top -1
int arr[size];
using namespace std;
void push(int x){
    if(top==size-1){
        cout<<"Overflow"<<endl;
        return;
    }
    top++;
    arr[top]=x;
    return;

}
void pop(){
    if(top==-1){
        cout<<"Underflow"<<endl;
        return;
    }
    // int temp = arr[top];
    top--;
    return;
}
int top(){
    if(top==-1){
        cout<<"Underflow"<<endl;
        return -1;
    }
    return arr[top];
}


int main(){
    


    return 0;
}