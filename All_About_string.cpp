#include<bits/stdc++.h>
using namespace std;
int getlength(char ch[]){
    int count=0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse_ch(char ch[],int n){
    int s=0,e=n-1;
    while(s<e){
        swap(ch[s++],ch[e--]);
    }
}
int main(){

        char ch[20];

        cout<<"Enter the Name"<<endl;
        cin>>ch;

        cout<<endl<<"The Length of the Name is "<<getlength(ch)<<endl;
        int n = getlength(ch);
        reverse_ch(ch,n);
        cout<<endl<<"The Reverse of the Name is "<<ch;

        
    
    
    
    return 0;
}