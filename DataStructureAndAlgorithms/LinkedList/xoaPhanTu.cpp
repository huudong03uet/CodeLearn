#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

Node* creatNode(int n)
{
    Node* newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;
    return newNode;
}
void printList(Node* p)
{
    while(p->next != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << p->data << " ";
}
Node* addElement(Node* p, int data)
{
    Node* last = p;
    Node* newNode = creatNode(data);
    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
    return p;
}

Node *addHead(Node* p, int x)
{
    Node* newNode = creatNode(x);
    newNode->next = p;
    
    return newNode;
}

Node* addAt(Node* p, int k, int x)
{
    if(k == 0)
    {
        p = addHead(p, x);
        return p;
    }
    
    Node* pos = p;
    for(int i = 0; i < k - 1; i++)
    {
        pos = pos->next;
    }
    Node* newNode = creatNode(x);
    newNode->next = pos->next;
    pos->next = newNode;
    return p;
}

Node* deleteHead(Node* p)
{
    Node* newNode = p->next;
    delete(p);
    return newNode;
}

Node* deleteLast(Node* p)
{
    Node* pos = p;
    while(pos->next->next != NULL)
    {
        pos = pos->next;
    }
    Node* left = pos; pos = pos->next;
    left->next = NULL;
    delete(pos);
    return p;
}

Node* deleteAt(Node* p, int k)
{
    if(k == 0)
    {
        p = deleteHead(p);
        return p;
    }
    Node* pos = p;
    for(int i = 0; i < k - 1; i++)
    {
        pos = pos->next;
    }
    Node* tmp = pos->next;
    pos->next = pos->next->next;
    delete(tmp);
    return p;
}
int main(){
    int n; int x;
    cin >> n >> x;
    Node* p = creatNode(x);
    for(int i = 0; i < n - 1; i++)
    {
        cin >> x;
        p = addElement(p, x);
    }
    int k; cin >> k;
    p = deleteAt(p, k);
    printList(p);
    return 0;
}