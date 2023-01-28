
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
node *reverse_linked_list(node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    node *reversed_list = reverse_linked_list(head->next);
    head->next->next = head;
    head->next = nullptr;
    return reversed_list;
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
    node *curr = head;
    node *next= curr->next;

    head = reverse_linked_list(head);

    cout << "Reversed linked list: ";
    printList(head);
    return 0;
}
