
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
  vector <int> arr;
    for(node *curr=head;curr!=NULL;curr=curr->next)
    {
        arr.push_back(curr->data);
    }
    for(node *curr=head;curr!=NULL;curr=curr->next)
    {
        curr->data=arr.back();//copy the last item of array into the current node.
        arr.pop_back();       //remove the last node.
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
    printList(head);
    cout << endl;

    cout << "Reversed linked list is:";
    reverse(head);
    cout << endl;
    printList(head);

    return 0;
}