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
    cout << "->" << (head->data);
    return printList(head->next);
}

node *insertEnd(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
        return temp;

    node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
    return head;
}

node *insertPos(node *head, int pos, int data)
{
    node *temp = new node(data);
    if (pos == 1 || head == NULL)
    {
        temp->next = head;
        return temp;
    }
    node *current = head;
    for (int i = 1; i < pos - 1 && current->next != NULL; i++)
    {
        current = current->next;
    }
    temp->next = current->next;
    current->next = temp;
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
        head = insertEnd(head, x);
    }
    cout << "Inserted elements are: ";
    printList(head);
    int p, q;
    cout << endl;
    cout << "Enter Position and the Data: ";
    cin >> p >> q;
    head = insertPos(head, p, q);
    cout << "Updated list: ";
    printList(head);
    return 0;
}
