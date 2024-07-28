#include<iostream>
using namespace std;

struct node{ //self refrence structure
    int data;
    node *next;
};
node * create_head(int d){
   node *n=new node;
   n->data=d;
   n->next=NULL;
   return n;
}

node * insert(node *h,int d){
    node *temp=h;
    while(temp->next!=NULL)
           temp=temp->next;
    node * n=new node;
    n->data=d;
    n->next=NULL;
    temp->next=n;
    return h;
}
 
void traverse(node *h){
    node *t=h;
    while (t->next!=NULL)
    {
      cout<<t->data<<" ";
      t=t->next;
    }
    cout<<t->data;
}

int main()
{
    node *head=create_head(90);
    head=insert(head,88);
    head=insert(head,99);
    head=insert(head,8);
    head=insert(head,7);
    traverse(head);
    //cout<<head->data<<endl;
    //cout<<head->next;
}
