
#include <bits/stdc++.h>
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
    cout << "->" << head->data;
    return printList(head->next);
}
node *insertEnd(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        return temp;
    }
    node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
    return head;
}
node *reverse(node *head)
{
    node *curr = head;
    node *prev = NULL;
    while(curr!=NULL)
    {
        node *next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int main()
{
    int n, x, y;
    node *head = NULL;
    cout << "How many elements you want to insert:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        head = insertEnd(head, x);
    }
    cout << "Original linked list: ";
    printList(head);
    cout << endl;

    cout << "Reversing linked list..." << endl;
    head = reverse(head);

    cout << "Reversed linked list: ";
    printList(head);
    cout << endl;

    return 0;
}
