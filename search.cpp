#include<iostream>
using namespace std;

struct node{
int data;
node *next;
node(int x){
    data = x;
    next = NULL;
}
};

int printList(node *head)
{
    node *current = head;
    while(current!=NULL)
    {
        cout<<(current->data)<<" ";
        current = current->next;
    }
return 0;
}
int search(node *head, int k)
{
    node *current = head;
    int position = 1;
    while(current!=NULL)
    {
        if(current->data == k)
        {
            cout<<"found at location "<<position;
        }
        else{
            position++;
        }
    current = current->next;
    } 
return -1;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    printList(head);
    cout<<"element you want to search:";
    int n;
    cin>>n;
    search(head,n);
    return 0;
}