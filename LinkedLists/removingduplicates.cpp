#include<iostream>
using namespace std;

class Node:

{
public:
int data;
Node*next ;
Node(data){
this->data=data;
this->next=NULL;
}
};
Node* removingDuplicates(Node*head)
{
  Node*curr=head;
  while(curr!=NULL)
  {
    Node*temp=curr->next;
    while(temp!=NULL){
      if(curr->data==temp->data)
      {
        Node*store=curr->next->next;
        Node*nodetobedeleted=curr->next;
        delete(nodetobedeleted);
        curr->next=store;

      }
      temp=temp->next;
    }
    curr=curr->next;
  }
}