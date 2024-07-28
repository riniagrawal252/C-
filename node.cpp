#include<iostream>
using namespace std;

struct node{ //self refrence structure
    int data;
    node *next;
};
node * create_head(node * h){
    int d;
    node *n=new node;
    cout<<"Enter Number :";
    cin>>d;
    n->data=d;
    n->next=NULL;
    h=n;
    return h;
}
int main()
{
    node *head;
    head=create_head(head);
}
