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

int getNode(int pos, Node* node)
{
    Node* p = node;
    for(int i = 0; i < pos; i++)
    {
        p = p->next;
    }
    return p->data;
}

Node* convert(Node* p, int a, int b)
{
    Node* pos = p;
    while(pos != NULL)
    {
        if(pos->data == a)
        {
            pos->data = b;
        }
        pos = pos->next;
    }
    
    return p;
}

Node* deleteBigger(Node* p, int n)
{
    Node* newNode = p;
    int pos = 0;

    while(newNode != NULL)
    {
        if(newNode->data > n)
        {
            newNode = newNode->next;
            p = deleteAt(p, pos);
        }
        else
        {
            newNode = newNode->next;
            pos++;
        }
        
    }
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
    cin >> n;
    int number_ = getNode(n, p);
    p = deleteBigger(p, number_);
    printList(p);
    return 0;
}