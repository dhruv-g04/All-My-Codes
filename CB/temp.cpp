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




void insertattail(node *&head, node *&tail, int d)
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
		tail->next = new node(d);
		tail = tail->next;
	}
	return;
}

node *take_input(node *&head, node *&tail, int n)
{
	int d;
	// cin >> d;
	head = NULL;
	int i = 0;
	while (i < n)
	{
		cin >> d;
		insertattail(head, tail, d);
		// cout<<d<<" d"<<endl;
		i++;
	}
	return head;
}


node *reverse_ll(node *&head, int k)
{
	node *p = NULL;
	node *c = head;
	node *n;

	int i = 0;
	while (i < k and c != NULL)
	{
		n = c->next;
		c->next = p;
		p = c;
		c = n;
		i++;
	}
	if (n != NULL)
	{
		head->next = reverse_ll(c, k);
	}

	return p;
}


int main()
{
	int n, k;
	node *head, *tail;
	cin >> n >> k;
	head = take_input(head, tail, n);
	head = reverse_ll(head, k);
	print(head);

	return 0;
}