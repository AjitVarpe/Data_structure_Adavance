#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    
    stack<int> stl;
    stl.push(1);
    stl.push(3);
    stl.push(4);
    stl.push(5);
    stl.push(6);
    stl.push(7);
    st.push(10);
    st.push(80);
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);

    cout<<"size of the stack : ";
    cout<<st.size()<<endl;

    // check stack is empty or not 
    cout<<st.empty()<<endl;

    cout<<"Stack Variables : "<<endl;
    // loop will work util the stack having element in it
    stl.swap(st);
     while (!stl.empty())
    {
        cout<<stl.top()<<" ";
        stl.pop();
    }
    cout<<"Reversed stack is "<<endl;
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    

    
    
    
    return 0;
}