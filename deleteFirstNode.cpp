#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next = NULL;
    }
};
void printList(node *head)
{if(!head) return;
    cout <<"->"<<(head->data);
    return printList(head->next);
}
node *insertEnd(node *head, int x)
{
    node *temp = new node(x);
    if(head==NULL)
    return temp;

    node *current = head;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next = temp;
    return head;
}
node *deleteFirst(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
}
int main()
{
    int n,i,x;
    node *head = NULL;
    cout<<"how many elements to start with:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        head = insertEnd(head,x);
    }
    cout<<"Inserted elements are: ";
    printList(head);
    cout<<endl;
    head = deleteFirst(head);
    cout << "After deletion elements are: ";
    printList(head);

    return 0;
}