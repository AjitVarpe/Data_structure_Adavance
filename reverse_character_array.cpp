#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
// 344. Reverse String
// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.
    void reverseString(char ch[],int n) {
        int f=0,e=n-1;
        while(f<e){
            swap(ch[f++],ch[e--]);
        }
        
    }
int getlength(char ch[]){
    int count=0;
    for (int i = 0;ch[i]=='\0'; i++)
    {
        count++;
    }
    return count;
}
int main(){
    char ch[20];
    cout<<"Enter the Name : "<<endl;
    cin>>ch;
    int n=getlength(ch);
    reverseString(ch,n);
    cout<<"The Reverse of the String is "<<ch<<endl;
    return 0;
}