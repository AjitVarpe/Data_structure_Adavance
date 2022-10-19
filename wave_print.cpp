#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter Array size :-"<<endl;
    cin>>m>>n;

    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if((i+2)%2==0){
            
            for (int j = 0; i < m; i++)
            {
                cout<<arr[j][i]<<" ";
            }
            
        }else{
             for (int j = m-1;j>=0; j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
    



    



    return 0;
}