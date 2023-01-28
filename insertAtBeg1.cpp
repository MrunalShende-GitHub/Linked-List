#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node (int x)
    {   data = x;
        next = NULL;
    }
};

node *insertBeg(node *head,int x)//here new node is becoming head;
{
    node *temp =new node(x);
    temp->next = head;
    return temp;

}
void printList(node *head)
{
    // node *current = head;
    // while(current !=NULL)
    // {
    //     cout<<(current->data)<<" ";
    //     current=current->next;
    // }
if(!head)return;
    cout<<(head->data)<<" ";
    return printList(head->next);
}

int main()
{
    int n, i, x=0;
    node *head = NULL;
    cout<<"how many elements you want to enter:";
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>x;
      head = insertBeg(head,x);
    }
    cout<<"insert in the beginning will be:";
    printList(head);
    return 0;
}