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
node *NthNode(node *head, int n)
{
    // if(head==NULL) return NULL;

    // node *first=head;
    // for(int i=0;i<n;i++)
    // {
    //     if(first==NULL) return NULL;
    //     first=first->next;
    // }
    // node *second = head;
    // while(first!=NULL)
    // {
    //     second = second->next;
    //     first = first->next;
    // }
    // cout << endl;
    // cout<<(second->data);
vector <int> arr;




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

    cout << "Enter position from end you want to search for:";
    cin >> y;
    NthNode(head, y);

    return 0;
}