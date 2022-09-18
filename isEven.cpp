#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
bool isEven(int num){
    if(num&1){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    cout<<"Enter the number to check Even or Odd "<<endl;
    int Number;
    cin >> Number;
    if(isEven(Number)){
        cout<<"Number is Even "<<endl;
    }
    else{
        cout<< "Number is odd "<<endl;

    }

    return 0;
}