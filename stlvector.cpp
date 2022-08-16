#include<iostream>
#include<vector>
using namespace std;
int main(){
    

    // declaring vector of 4 size 
    vector<int> a;
    // insert element in vector
    cout<<"Enter how many element we want to insert "<<endl;
    int size,element;
    cin>>size;
    for (size_t i = 0; i < size; i++)
    {
        cin>>element;
        a.push_back(element);
    }

    // Display element 
    for (size_t i = 0; i < size; i++)
    {
        cout<<a.at(i)<<" ";
    }
    



}