#include <iostream>
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
int main(){
    int n, x; cin >> n;
    Node* t = NULL;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        t = insert(t, x);
    }
    printTree(t);
    return 0;
}