#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(80);
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    cout<<"Stack Variables : "<<endl;
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    
    return 0;
}