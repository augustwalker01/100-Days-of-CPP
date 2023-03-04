 int intersectPoint(Node* head1, Node* head2)
 {
 
    APPROACH 1 
    map<Node*,bool>visited;
    
    while(head1)
    {
        visited[head1->data]=true;
        head1=head1->next;
    }
    while(head2)
    {
        if(visited[head2->data])
        {
            return head2->data;
        }
        head2=head2->next;
    }
    return -1;
}


APPROACH 2
Node*dummy1=head1;
 Node*dummy2=head2;
int l1=0;
int l2=0;
int c;
while(head1)
{
l1++;
head1=head1->next;
}
head1=dummy1;
while(head2)
{
    l2++;
    head2=head2->next;
}
head2=dummy2;
if(l1>l2)
{
    c=l1-l2;
    while(c--)
    {
        head1=head1->next;
    }
    
}
if(l1<l2)
{
    c=l2-l1;
    while(c--)
    {
        head2=head2->next;
    }
}
while(head1 && head2)
{
    if(head1==head2)
    {
        return head1->data;
    }
    head1=head1->next;
    head2=head2->next;
}
return -1;
}
