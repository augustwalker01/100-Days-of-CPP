#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;
    Node(int data)
    {
    this->data=data;
    this-> next=NULL;
    }
};

void insertAthead(Node*&head,int d)
{
    Node*temp=new Node(d);
    temp ->next=head;
    head=temp;
    
}
void insertAttail(Node*&tail,int d)
{
    Node*temp=new Node(d);
    tail->next=temp;
    temp=tail;
}
void InsertatPosition(Node*&head,int position, int d)
{
    if(position==1)
    {
        insertAthead(head,d);
        return;
    }
  Node*temp=head;
  int cnt=1;
  while(cnt<position-1)
  {
      temp=temp->next;
      cnt++;
  }
  Node*nodetoInsert=new Node(d);
  nodetoInsert->next=temp->next;
  temp->next=nodetoInsert;
}
void print(Node*&head){
    Node*temp=head;
    while (temp!=NULL)
    {
     cout<<temp->data<<" "<<endl;
     temp=temp->next;
    }
}
int main() {
    // Write C++ code here
   Node*Node1= new Node(10);
   Node*head=Node1;
   Node*tail=Node1;
   print(head);
   
   insertAttail(tail,11);
   print(head);
   InsertatPosition(head,3,12);
   print(head);
   

return 0;
}