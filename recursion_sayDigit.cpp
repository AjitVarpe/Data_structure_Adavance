#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
void printDigit(string arr[],int num){
    if(num==0){return;}
    int digit = num%10;
    printDigit(arr,num/10);
    cout<<arr[digit]<<" ";

}
int main(){
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    cout<<"Enter Number to check the Word for Every Number :"<<endl;
    int number=0;
    cin>>number;

    printDigit(arr,number);


    return 0;
}