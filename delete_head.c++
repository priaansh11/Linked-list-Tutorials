#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
Node* del(Node*);
Node* del(Node* head)
{
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
int main()
{
     vector<int> v={1,2,3,4,5};
    Node* head = new Node(v[0]);
    Node* temp=head;
    for(int i=1;i<v.size();i++)
    {
        Node* p=new Node(v[i]);
        temp->next=p;
        temp=p;
    }
    temp=head;
    while (temp!=nullptr)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    head=del(head);
    temp=head;
    cout<<endl;
    while (temp!=nullptr)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    return 0;
}