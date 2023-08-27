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

void print(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
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

void insertattail(node*&head,node *&tail, int d)
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
void insertathead(node *&head,node *&tail, int d)
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


node *take_input(node*&head,node*&tail,int n)
{
    int d;
    // cin >> d;
    head = NULL;
	int i=0;
    while (i<n)
    {
		cin >> d;
        insertattail(head,tail, d);
		// cout<<d<<" d"<<endl;
		i++;
    }
    return head;
}

int main(){
	int t,n1,n2;
	cin>>t>>n1;
	node* head1;
	node* head2;
	node* tail1;
	node* tail2;
	head1=take_input(head1,tail1,n1);
	cin>>n2;
	// cout<<n2<<endl;
	head2=take_input(head2,tail2,n2);
	// print(head1);
	// cout<<endl;
	// print(head2);
	head1=merge(head1,head2);
	print(head1);
}