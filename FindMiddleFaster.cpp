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
node *middleFaster(node *head)
{
    if(head==NULL) return NULL;
    node *slow = head;
    node *fast = head;
    while(fast !=NULL && fast->next !=NULL )
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<endl;
    cout<<slow->data;
    
}

int main()
{
    int n, x;
    node *head = NULL;
    cout << "How many elements you want to insert:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        head = insertEnd(head, x);
    }
    printList(head);
    middleFaster(head);
    return 0;
}