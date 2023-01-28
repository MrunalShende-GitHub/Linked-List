#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(node *head)
{
    if (!head)
        return;
    cout << (head->data) << "->";
    return printList(head->next);
}

node *insertSorted(node *head, int x)
{
 node *temp=new node(x);
 if(head == NULL || head->data>=x)
 {
    temp->next=head;
    return temp;
 }
 node *current=head;
 while(current->next->data<x &&current->next!=NULL)
 {
    current=current->next;
 }
 temp->next=current->next;
 current->next=temp;
 return head;
}

int main()
{
    int n, i, x;
    node *head = NULL;
    cout << "how many elements to start with:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        head = insertSorted(head, x);
    }
    cout << "Inserted elements are: ";
    printList(head);
    return 0;
}
