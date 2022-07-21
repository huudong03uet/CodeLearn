#include <iostream>
#include <algorithm>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* p, int x)
{
    if(p == NULL)
    {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    else
    {
        if(x < p->data) p->left = insert(p->left, x);
        else p->right = insert(p->right, x);
    }
}
void printTree(Node* t)
{
    if(t != NULL)
    {
        printTree(t->left);
        cout << t->data << " ";
        printTree(t->right);
    }
}

int cntLeafNode(Node* t)
{
    if(t == NULL) return 0;
    else if(t->left == NULL && t->right == NULL) return 1;
    else return cntLeafNode(t->left) + cntLeafNode(t->right);
}

int treeLevel(Node* t)
{
    if(t == NULL) return -1;
    else if(t->left == NULL && t->right == NULL) return 0;
    else return 1 + max(treeLevel(t->left), treeLevel(t->right));
}

bool checkAVL(Node* t)
{
    if(t == NULL) return true;
    else if(abs(treeLevel(t->left) - treeLevel(t->right)) > 1) return false;
    return checkAVL(t->left) && checkAVL(t->right);
    return true;
}
int main(){
    int n, x; cin >> n;
    Node* t = NULL;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        t = insert(t, x);
    }
    if(checkAVL(t)) cout << "true";
    else cout << "false";
    return 0;
}