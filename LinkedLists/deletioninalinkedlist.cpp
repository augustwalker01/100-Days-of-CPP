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
~Node(){
  int value=this->data;
  //memory free
  if (this->next!=NULL){
    delete next;
    this->next=NULL;
  }
  cout<<"Memory freed for "<<" "<< value;
}
};
void deletingatposition(Node*head,int position)
{
  if(position == 1)
  {
    Node*temp=head;
    head=head->next;
    delete temp;

  }

  Node*temp=head;
  Node*q=NULL;
  int cnt=1
  while(cnt<position-1)
  {
    temp=temp->next;
    cnt++;
  }
  q=temp->next;
  temp->next=q->next;
  q->next=NULL;
  delete q;

  
}