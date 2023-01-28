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

node *reverse_linked_list(node *head, node *prev)
{
    if (head == NULL)
    {
        return prev;
    }
    node *next = head->next;
    head->next = prev;
    return reverse_linked_list(next, head);
}

node *removeDuplicates(node *head)
{
    node *current = head;
    while (current != NULL && current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            node *temp = current->next;
            current->next = current->next->next;
            delete (temp);
        }
        else
        {
            current = current->next;
        }
    }
    return head;
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

    // cout << "Reversing linked list..." << endl;
    // head = reverse_linked_list(head, NULL);

    // cout << "Reversed linked list: ";
    // printList(head);
    cout << "removing duplicates:";
    cout << endl;
    head = removeDuplicates(head);
    printList(head);

    return 0;
}
