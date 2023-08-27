#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
private:
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

node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    // int i;
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
}

void printpre(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printpre(root->left);
    printpre(root->right);
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}

void printKthlevel(node *root, int k)
{

    if (root == NULL) // or k > height(root)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    printKthlevel(root->left, k - 1);
    printKthlevel(root->right, k - 1);
    return;
}

void printAllLevel(node *root)
{
    int H = height(root);
    for (int i = 1; i <= H; i++)
    {
        printKthlevel(root, i);
        cout << endl;
    }
}

void bfs(node *root) // level order printing only queue
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

// BFS using pair

void bfspair(node *root) // level order printing Using Pair in Queue
{
    queue<pair<node *, int>> q;
    q.push({root, 1});
    int curlev = 1;
    while (!q.empty())
    {
        node *temp = q.front().first;
        int lev = q.front().second;
        if (curlev != lev)
        {
            cout << endl;
            curlev = lev;
        }

        cout << temp->data << " ";
        q.pop();
        if (temp->left != NULL)
        {
            q.push({temp->left, lev + 1});
        }
        if (temp->right != NULL)
        {
            q.push({temp->right, lev + 1});
        }
    }
    return;
}

int noOfNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return noOfNodes(root->left) + noOfNodes(root->right) + 1;
}

int SumOfNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return SumOfNodes(root->left) + SumOfNodes(root->right) + root->data;
}

pair<int, int> diameter(node *root) // pair<dia,height>
{
    // pair<int,int> p;
    if (root == NULL)
    {
        return {0, 0};
    }

    pair<int, int> o1 = diameter(root->left);
    pair<int, int> o2 = diameter(root->right);
    int h1 = o1.second;
    int h2 = o2.second;
    int d1 = o1.first;
    int d2 = o2.first;
    int h = h1 + h2;
    return {max(h, max(d1, d2)), max(h1, h2) + 1};
}

int ans = 0;
void noOfLeaf(node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL and root->right == NULL)
    {
        ans++;
        return;
    }
    // cout<<"hi\n";
    // cout << root->data << " ";
    noOfLeaf(root->left);
    noOfLeaf(root->right);
}

int CumulativeSum(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL and root->right == NULL)
    {
        return root->data;
    }
    int temp = root->data;

    root->data = CumulativeSum(root->left) + CumulativeSum(root->right);
    return root->data + temp;
}

pair<bool, int> balancedTree(node *root) //<bool,height>
{
    if (root == NULL)
    {
        return {true, 0};
    }
    pair<bool, int> lbal = balancedTree(root->left);
    pair<bool, int> rbal = balancedTree(root->right);
    if (abs(lbal.second - rbal.second) <= 1 and lbal.first == true and rbal.first == true)
    {
        return {true, max(lbal.second, rbal.second) + 1};
    }
    else
    {
        return {false, max(lbal.second, rbal.second) + 1};
    }
}

// DFS
vector<int> rightDFS;
// int maxlevel=-1;
void printRightView(node *root, int level, int &maxlevel)
{
    if (root == NULL)
    {
        return;
    }
    if (maxlevel < level)
    {
        cout << root->data << " ";
        maxlevel = level;
        // return;
    }
    printRightView(root->right, level + 1, maxlevel);
    printRightView(root->left, level + 1, maxlevel);
    return;
}

node *leastCommonAncestor(node *root, int a, int b) // LCA
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == a or root->data == b)
    {
        return root;
    }
    node *lcheck = leastCommonAncestor(root->left, a, b);
    node *rcheck = leastCommonAncestor(root->right, a, b);
    if (lcheck != NULL and rcheck != NULL)
    {
        return root;
    }
    if (lcheck != NULL)
    {
        return lcheck;
    }
    return rcheck;
}

vector<int> v;
int nodeAtKth(node *root, node *target, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root == target)
    {
        printKthlevel(root, k);
        return 0;
    }
    int ll = nodeAtKth(root->left, target, k);
    if (ll != -1)
    {
        if (ll + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printKthlevel(root->right, k - ll - 2);
        }
        return ll + 1;
    }
    int rl = nodeAtKth(root->right, target, k);
    if (rl != -1)
    {
        if (rl + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printKthlevel(root->left, k - rl - 2);
        }
        return rl + 1;
    }
    return -1;
}

int maxSum = INT_MIN;
int maxSumPath(node *root) //<branchSum , MaxSum>
{
    if (root == NULL)
    {
        return 0;
    }
    int lsum = maxSumPath(root->left);
    int rsum = maxSumPath(root->right);
    int op1 = root->data;
    // int op2 = lsum+ op1;
    // int op3 = rsum + op1;
    lsum = max(lsum, 0);
    rsum = max(rsum, 0);
    int op4 = lsum + rsum + root->data;

    int branchSum = root->data + max(lsum, rsum);
    maxSum = max(maxSum, op4);
    // cout<<maxSum<<" "<<op4<<" "<<branchSum<<endl;
    return branchSum;
}

// Input ~~~~~~~>
// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
/*
             8
        10       3
      1    6       14
          9 7     13
*/
// Input ~~~~~~~>
// 1 2 4 6 -1 -1 7 10 -1 -1 11 -1 -1 5 8 -1 -1 9 -1 -1 3 -1 -1
 /*
              1
        2          3
    4       5       
  6   7   8   9     
    10 11   
*/

int main()
{
    node *root = buildTree();
    // cout<<;
    printpre(root);
    cout << endl;
    cout << "Height: " << height(root) << endl;
    // printAllLevel(root);
    // cout << endl;
    cout << "Printing Via BFS\n";
    bfs(root);
    cout << "No of Nodes: " << noOfNodes(root) << endl;
    cout << "Sum of Nodes: " << SumOfNodes(root) << endl;
    cout << "Diameter: " << diameter(root).first << endl;
    noOfLeaf(root);
    cout << "No of Leafs: " << ans << endl;
    cout << "Cummulative Sum\n";
    // CumulativeSum(root);
    // bfs(root);
    cout << "Is Balanced: " << (balancedTree(root).first) << endl;
    // printpre(root);
    cout << "\nRight Veiw\n";
    int maxlevel = -1;
    printRightView(root, 0, maxlevel);
    cout << endl;
    cout << "Common Ancestor of 6 and 1 : " << leastCommonAncestor(root, 1, 6)->data << endl;
    cout << "Max sum Path : ";
    maxSumPath(root);
    cout << maxSum << endl;
    cout<<"Nodes at K distance:  ";
    node *target = root->left->left;
    nodeAtKth(root, target, 2);
    cout<<endl;
    return 0;
}