#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *insertInBST(node *root, int d)
{
    if (root == NULL)
    {
        node *root = new node(d);
        return root;
    }
    if (d <= root->data)
    {
        root->left = insertInBST(root->left, d);
    }
    else
    {
        root->right = insertInBST(root->right, d);
    }
    return root;
}

node *build()
{
    int d;
    cin >> d;
    node *root = NULL;
    while (d != -1)
    {
        root = insertInBST(root, d);
        cin >> d;
    }
    return root;
}

void bfs(node *root)
{
    // static int i = 0;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
    return;
}

bool binarySearch(node *root, int d)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == d)
    {
        return true;
    }
    if (root->data >= d)
    {
        binarySearch(root->left, d);
    }
    else
    {
        binarySearch(root->right, d);
    }
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

node *deleteInBST(node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (data < root->data)
    {
        root->left = deleteInBST(root->left, data);
        return root;
    }
    else if (root->data == data)
    {
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->right == NULL and root->left != NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left == NULL and root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        else
        {
            node *replace = root->right;
            while (replace->left != NULL)
            {
                replace = replace->left;
            }
            root->data = replace->data;
            root->right = deleteInBST(root->right, replace->data);
            return root;
        }
    }
    else
    {
        root->right = deleteInBST(root->right, data);
        return root;
    }
}

bool checkBST(node *root, int minv = INT_MIN, int maxv = INT_MAX)
{
    if (root == NULL)
        return true;
    if (root->data < maxv and root->data > minv and checkBST(root->left, minv, root->data) and checkBST(root->right, root->data, maxv))
        return true;
    return false;
}

pair<node *, node *> convertBSTtoLinkList(node *root) // FLATTEN
{
    pair<node *, node *> p;
    if (root == NULL)
    {
        return {NULL, NULL};
    }
    if (root->left == NULL and root->right == NULL)
    {
        p.first = p.second = root;
        return p;
    }
    if (root->left != NULL and root->right == NULL)
    {
        pair<node *, node *> temp = convertBSTtoLinkList(root->left);
        temp.second->right = root;
        p.first = temp.first;
        p.second = root;
        return p;
    }
    if (root->left == NULL and root->right != NULL)
    {
        pair<node *, node *> temp = convertBSTtoLinkList(root->right);
        root->right = temp.first;
        p.first = root;
        p.second = temp.second;
        return p;
    }

    pair<node *, node *> templ = convertBSTtoLinkList(root->left);
    pair<node *, node *> tempr = convertBSTtoLinkList(root->right);
    templ.second->right = root;
    root->right = tempr.first;
    p.first = templ.first;
    p.second = tempr.second;
    return p;
}



int main()
{
    node *root = NULL;
    root = build();
    inorder(root);
    cout << endl;
    bfs(root);
    cout << "Is this element present: " << binarySearch(root, 1);
    cout << endl;
    cout << "Is this BST : " << checkBST(root) << endl;
    // root = deleteInBST(root, 3);
    
    bfs(root);
    return 0;
}