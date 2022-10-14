#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
void toUppercase(char ch[]){
    for (int i = 0;ch[i] != '\0'; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z'){
            continue;
        }else if(ch[i]>='a' && ch[i]<='z'){
            ch[i]= ch[i]-'a'+'A';
        }
    }
    
}
int main(){
    char ch[20];
    cout<<"Enter the  String to Uppercase :-"<<endl;
    cin>>ch;
    toUppercase(ch);
    // cout<<endl;
    cout<<"Uppercase String is "<<ch<<endl;



    return 0;
}