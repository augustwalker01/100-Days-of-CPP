#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*next;
  Node(int data)
  {
    this ->data=data;
    this ->next=NULL;

  }

};
void insert(Node*&head,int d)
{
  Node*temp=new Node(10);
  temp->next=head;
  head=temp;

}
void insertatPosition()
