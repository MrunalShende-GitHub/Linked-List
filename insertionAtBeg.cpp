#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data =x;
        next = NULL;
    }
};
// int printList(node *head)
// {
//     node *current = head;
//     while(current!=NULL)
//     {
//         cout<<(current->data)<<" ";
//         current=current->next;

//     } 
//     return 0;
// }
// Now using Recur
int printList(node *head)
{
    cout << (head->data) << " ";
    printList(head->next);
    return 0;
}

int main()
{
    node *head = new node(10);
    // node *temp1 = new node(20);
    // node *temp2 = new node(30);
    // head->next = temp1;
    // temp1->next = temp2;
    // or you can simply do:
    head->next=new node(20);
    head->next->next = new node(30);

    printList(head);
    return 0;
}