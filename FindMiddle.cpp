#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
void printList(node *head)
{if(!head)return;
    cout<<"->"<<head->data ;
    return printList(head->next);
}
node *insertEnd(node *head,int x)
{
    node *temp = new node(x);
    if(head==NULL)
    {
        return temp;
    }
    node *current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
    return head;
}
node *middle(node *head)
{   int count=0;
    node *current = head;
    while(current->next != NULL)
    {
        count=count+1;
        current = current->next; 
    }
    current = head;
    for(int i=0;i<count/2;i++)
    {
        current = current->next;
    }
    cout<<endl;
cout<<"Middle element is: "<<current->data;
}


int main()
{int n,x;
node *head=NULL;
cout<<"How many elements you want to insert:";
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>x;
    head = insertEnd(head,x);
}
printList(head);
node *middleNode = middle(head);
return 0;
}