#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

node *head = NULL;
node *tail = NULL;

int length(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void insertathead(node *&head, int d)
{
    if (head == NULL)
    {
        head = new node(d);
        tail = head;
        return;
    }
    node *n = new node(d);
    n->next = head;
    head = n;
    return;
}

void insertattail(node *&tail, int d)
{
    if (head == NULL)
    {
        // insertathead(head,d);
        head = new node(d);
        tail = head;
        return;
    }
    else
    {
        // tail=head;
        // while(tail->next!=NULL){
        //     tail=tail->next;
        // }
        tail->next = new node(d);
        tail = tail->next;
    }
    return;
}

void insertatmiddle(node *&head, node *&tail, int p, int d)
{
    if (head == NULL or p <= 1)
    {
        insertathead(head, d);
        return;
    }
    else if (p > length(head))
    {
        insertattail(tail, d);
        return;
    }
    node *temp = head;
    for (int i = 1; i < p - 1; i++)
    {
        temp = temp->next;
    }
    node *n = new node(d);
    n->next = temp->next;
    temp->next = n;
    return;
}

void deletionbydata(node *&head, node *&tail, int d)
{
    node *temp = head;
    if (head->data == d)
    {
        node *todel = head;
        head = head->next;
        cout << "Deleted data is " << todel->data << endl;
        delete todel;
        return;
    }
    while (temp->next->data != d)
    {
        temp = temp->next;
    }
    node *todel = temp->next;
    temp->next = temp->next->next;
    if (temp->next == NULL)
    {
        tail = temp;
    }
    cout << "Deleted data is " << todel->data << endl;
    delete todel;
    return;
}

void deletionbypos(node *&head, node *&tail, int pos)
{
    if (pos <= 1)
    {
        node *todel = head;
        head = head->next;
        cout << "Deleted data is " << todel->data << endl;
        delete todel;
        return;
    }
    int i = 1;
    node *temp = head;
    while (i != pos - 1)
    {
        temp = temp->next;
        i++;
    }
    node *todel = temp->next;
    temp->next = temp->next->next;

    if (temp->next == NULL)
    {
        tail = temp;
    }
    cout << "Deleted data is " << todel->data << endl;
    delete todel;
    return;
}

int search(node *head, int d)
{
    node *temp = head;
    int pos = 1;
    while ((temp->data != d))
    {
        pos++;
        temp = temp->next;
        if ((temp == NULL))
        {
            break;
        }
    }
    if (temp == NULL)
    {
        return -1;
    }
    else
    {
        return pos;
    }
}

node *take_input()
{
    int d;
    cin >> d;
    node *head = NULL;
    while (d != -1)
    {
        insertathead(head, d);
        cin >> d;
    }
    return head;
}

void print(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}

void reverse_ll(node *&head)
{
    node *p = NULL;
    node *c = head;
    node *n;
    while (c != NULL)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    head = p;
    return;
}

node *recreverse_ll(node *&head)
{
    if (head->next == NULL or head == NULL)
    {
        return head;
    }
    node *shead = recreverse_ll(head->next);
    node *temp = head->next;
    temp->next = head;
    head->next = NULL;
    return shead;
}
istream &operator>>(istream &is, node *&head)
{
    head = take_input();
    return is;
}

ostream &operator<<(ostream &os, node *head)
{
    print(head);
    return os;
}

node *midpoint(node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }
    node *slow = head;
    node *fast = head->next;
    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node *kthnodefromlast(node *head, int k)
{
    node *fast = head;
    node *slow = head;
    int i = 1;
    while (i <= k)
    {
        fast = fast->next;
        i++;
    }
    while (fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

node *merge(node *a, node *b)
{
    node *c;
    if (a == NULL)
    {
        // cout<<b<<endl;
        return b;
    }
    if (b == NULL)
    {
        return a;
    }
    if (a->data > b->data)
    {
        c = b;
        // cout<<c<<endl;
        c->next = merge(a, b->next);
    }
    else
    {
        c = a;
        // cout<<c<<endl;
        c->next = merge(a->next, b);
    }
    // cout<<c<<endl;
    return c;
}

node *mergeSort(node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }
    node *mid = midpoint(head);
    node *a = head;
    node *b = mid->next;
    mid->next = NULL;
    a = mergeSort(a);
    b = mergeSort(b);
    node *c = merge(a, b);
    return c;
}

bool findCycle(node *head)
{
    if (head == NULL)
    {
        return false;
    }
    node *slow = head;
    node *fast = head;
    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

// void delete

int main()
{
    // head=NULL;
    // insertathead(head,4);
    // insertathead(head,3);
    // insertathead(head,2);
    // insertattail(123);
    // insertatmiddle(2, 55);
    // insertatmiddle(0, 54);
    // insertathead(1);
    // insertathead(2);

    // insertathead(3);
    // insertatmiddle(2,56);
    // insertathead(4);
    /*
    insertattail(head, 1);
    insertattail(tail, 2);
    insertattail(tail, 3);
    insertattail(tail, 4);
    insertattail(tail, 5);
    deletionbypos(head,tail,5);
    deletionbydata(head, tail, 4);
    cout << "head: " << head->data << "\ntail: " << tail->data << endl;
    cout<<"Found at index "<<search(head,3)<<"\n";
    print(head);
    */
    // node *head = take_input();
    // node *head2 = take_input();
    node *head1;
    node *head2;
    // print(head);
    // cout<<head2;
    cin >> head1 >> head2;

    cout << head1 << endl;
    // cout << head2 << endl;

    // node* head1;
    // cin>>head1;
    // cout<<head1<<endl;
    // node* headrev=recreverse_ll(head1);
    // cout<<headrev;
    // node* mid=midpoint(head1);
    // cout<<mid->data;
    // node* kth=kthnodefromlast(head1,5);
    // cout<<kth->data;

    // node*merg=merge(head1,head2);
    // cout<<merg<<endl;

    // node*mergesorthead=mergeSort(head1);
    // cout<<mergesorthead<<endl;

    return 0;
}