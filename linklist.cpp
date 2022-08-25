#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
void insertathead(Node *&head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}
void printlist(Node* &head){

    Node* temp = head;
    cout<<"lisklist is ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void InsertAtPos(Node* &head, int pos,int val){
    Node* temp = head;
    Node* list;
    while(pos--){
        temp = temp->next;
    }
    list = temp->next;
    Node* newnode = new Node(val);
    temp->next = newnode;
    newnode->next = list;
}
int getlength(Node* &head){
    Node* temp = head;
    int length=0;
    while (temp!=NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
    
}
int main()
{
    Node *head = NULL;
    insertathead(head,10);
    insertathead(head,80);
    insertathead(head,40);
    insertathead(head,50);
    InsertAtPos(head,1,100);
    printlist(head);
    cout<<endl<<"The length of the Linklist is "<<getlength(head)<<endl;
    return 0;
}