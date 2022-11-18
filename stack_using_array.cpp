#include<bits/stdc++.h>
#include<limits>
#include<String>
int size = 5;
int arr[5],top=-1;
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
int stack_top(){
    if(top==-1){
        cout<<"Underflow"<<endl;
        return -1;
    }
    return arr[top];
}


int main(){
    // int top = -1;
  int a= 7;
  while(a--){
    push(a);
  }
    return 0;
}