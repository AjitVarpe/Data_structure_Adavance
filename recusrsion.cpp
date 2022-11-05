#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int power(int a,int b){
    if(b==0)
    return 1;
    return a*power(a,b-1);
}

 void number(int num){
    // base c
    if(num==0){
        cout<<num<<" ";
        return;
    }
    // head 
    cout<<num<<" ";
    number(num-1);
    
 }


int main(){
    number(5);
    cout<<power(2,3);

    return 0;
}

