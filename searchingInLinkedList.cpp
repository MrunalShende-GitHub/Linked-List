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
    if(!head) return; 
    cout << (head->data) << " ";
    printList(head->next);
}
int search(node *head,int n)
{   int position = 1;
    node *current = head;
    while(current!=NULL)
    {
        if(current->data == n)
        {
            cout<<"found at position: "<<position;
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
    head->next->next = new node(30);
    int n;
    printList(head);
    cout<<"want to search:enter NO.";
    cin>>n;
    search(head,n);
    return 0;
}