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
    while (head!=nullptr)
    {
        cout<<head->data;
        head=head->next;
    }
    return 0;
}