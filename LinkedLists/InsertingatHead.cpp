// #include<iostream>
// using namespace std;
// class Node{
//   public:
//   int data;
//   Node* next;
//   Node(int data ){
//   this -> data=data;
//   this ->next= NULL;
// }
// };
// void insertatHead(Node*&head,int d)
// {
// Node *temp=new Node(d);
// temp->next=head;
// head=temp;
// }
// void print(Node*&head)
// {
//   Node*temp=head;
//   while(temp!=NULL)
//   {
//     cout<<temp->data<<endl;
//     temp=temp->next;
//   }
// }

// int main(){
// // creating a new node
// Node*node1= new Node(10);
// cout<<node1->data<<endl;
// cout<<node1->next<<endl;

// //head pointed to node1
// Node* head=node1;
// print(head);
// insertatHead(head,12);
// print(head);
// cout<<endl;


// return 0;
// }




#include <iostream>
using namespace std;


class Node
{
  public:
  int data;
  Node*next;
  Node(int data){
  this->data=data;
  this->next=NULL;

  }


};
void insertatHead(Node*&Head,int d)
{
Node*temp=new Node(d);
temp->next=Head;
Head=temp;
}
void printnodes(Node*&Head)
{
  Node*temp=Head;
  while(temp!=NULL)
  {
    cout<<temp->data<<endl;
    temp=temp->next;
  }
}


int main()
{
  Node*Node1=new Node(10);
  
}