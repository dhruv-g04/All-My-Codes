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

void bfs(node *root) // level order printing
{
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

int binarySearch(vector<int> v, int s, int e,int ele)
{
    if (s>e){
        return -1;
    }
    int mid = (e + s) / 2;
    if (v[mid]==ele){
        return mid;
    }
    else if (v[mid]>ele){
        return binarySearch(v,s,mid-1,ele);
    }
    else{
        return binarySearch(v,mid+1,e,ele);
    }
}

node *balanceBST(vector<int> v, int s, int e)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = (s + e) / 2;
    node *root = new node(v[mid]);
    root->left = balanceBST(v, s, mid - 1);
    root->right = balanceBST(v, mid + 1, e);
    return root;
}

// void flatten(node *root)
// {
//     node *curr = root;
//     while (curr != NULL)
//     {
//         if (curr->left)
//         {
//             node *prev = curr->left;
//             while (prev->right != NULL)
//             {
//                 prev = prev->right;
//             }
//             prev->right = curr->right;
//             curr->right = curr->left;
//             curr->left = NULL;
//         }
//         curr=curr->right;
//     }
// }

node *prevw = NULL;
void flatten(node *root)
{

    if (root == NULL)
        return;

    flatten(root->right);
    flatten(root->left);

    root->right = prevw;
    root->left = NULL;
    prevw = root;
}

node *createTreeFromTrav(vector<int> &inord, vector<int> &preord, int s, int e)
{
    static int i = 0;
    if (s > e)
    {
        return NULL;
    }
    node *root = new node(preord[i]);

    // int index=binarySearch(inord,0,7,preord[i]);
    int index=-1;
    for (int j=s;j<=e;j++){
        if (inord[j]==preord[i]){
            index=j;
            break;
        }
    }
    i++;
    root->left=createTreeFromTrav(inord,preord,s,index-1);
    root->right=createTreeFromTrav(inord,preord,index+1,e);

    return root;
}



int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7,10};
    cout<<binarySearch(v,0,v.size()-1,1)<<" INDEX\n";
    int n = 7;
    node *rootBalance = balanceBST(v, 0, n - 1);
    bfs(rootBalance);
    vector<int> inorder = {1,2};
    vector<int>preorder = {2,1};
    int len=inorder.size();
    node* rootCreate=createTreeFromTrav(inorder,preorder,0,len-1);
    bfs(rootCreate);
    cout<<rootCreate->data<<endl;
    cout<<"Flatten:\n";
    flatten(rootBalance);
    node *temp = rootBalance;
    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->right;
    }
    cout << endl;
    return 0;
}