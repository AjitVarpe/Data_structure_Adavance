#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
void print(int number){
    if(number==0){
        cout<<number<<" ";
        return;
    }
    cout<<number<<" ";
    print(number-1);
}
int main(){
    print(5);


    return 0;
}