#include<iostream>
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
node *insertBeg(node *head,int x)
{   node *temp = new node(x);

    if(head==NULL) return temp;

    temp->next = head;
    return temp;
}
node *insertEnd(node *head,int x)
{
    node *temp = new node(x);
    if (head == NULL)
        return temp;
    
    node *current = head;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=temp;
    return head;
}
node *deleteBeg(node *head)
{
    if(head==NULL) return NULL;

    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
node *deleteEnd(node *head)
{
    if (head == NULL)
        return NULL;
    
    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *current = head;
    while(current->next->next!=NULL)
    {
        current = current->next;
    }
    delete (current->next);
    current->next=NULL;
    return head;
}
void printList(node *head)
{
    if(!head) return;

    cout<<"->"<<(head->data);
    printList(head->next);
}
int main()
{
    int n,x,k;
    node *head = NULL;
    cout<<"How many elements you want to Enter:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        head = insertEnd(head,k);
    }
    cout<<"Serialized inserted elements are:";
    printList(head);
    while(x!=6)
    {
        cout << endl;
        cout << "*******choose options*******" << endl;
        cout << "1.insert a node at Beginning:" << endl;
        cout << "2.Insert a node at end:" << endl;
        cout << "3.Delete the head or node at the beginning:" << endl;
        cout << "4.Delete a node at the end:" << endl;
        cout << "5.Print List:" << endl;
        cout << "6.Exit:" << endl;
        cout << "ENTER OPTION::";
        cin >> x;
        switch (x)
        {
        case 1:
            int m;
            cout << "which element you want to enter:";
            cin >> m;
            head = insertBeg(head, m);
            break;
        case 2:
            int p;
            cout << "which element you want to enter:";
            cin >> p;
            head = insertEnd(head, p);
            break;
        case 3:
            head = deleteBeg(head);
            break;
        case 4:
            head = deleteEnd(head);
            break;
        case 5:
            cout << "Nodes in linked list are:";
            printList(head);
            break;
        case 6:
            cout << "THANK YOU FOR USING THE SERVICE OF LINKED LIST BASICS.";
            break;
        default:
            cout << "Entered the wrong option." << endl;
            break;
    }
    }

}