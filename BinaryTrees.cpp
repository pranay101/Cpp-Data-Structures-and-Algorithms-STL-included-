#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node * insert(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = insert(root->right, val);
    }

    return root;
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inOrder(root->left);
        cout << root->data << "->";
        inOrder(root->right);
        return;
    }
}


int main()
{
    Node *root = NULL;
    int arr[] = { 5, 1, 3, 4, 2, 7 };
    root = insert(root, arr[0]);
    for (int i = 1; i < 6; i++)
    {
        insert(root, arr[i]);
    }

    inOrder(root);
    return 0;
}
