#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
void toLowercase(char ch[]){
    for (int i = 0;ch[i] != '\0'; i++)
    {
        if(ch[i]>='a' && ch[i]<='z'){
            continue;
        }else if(ch[i]>='A' && ch[i]<='a'){
            ch[i]= ch[i]-'A'+'a';
        }
    }
    
}
int main(){
    char ch[20];
    cout<<"Enter the  String to Lowercase :-"<<endl;
    cin>>ch;
    toLowercase(ch);
    cout<<endl;
    cout<<"Lowercase String is "<<ch<<endl;



    return 0;
}