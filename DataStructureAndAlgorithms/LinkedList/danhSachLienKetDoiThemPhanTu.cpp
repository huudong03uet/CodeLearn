#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *pre;
};

struct doubleList
{
    Node* head;
    Node* tail;
};

doubleList *creatList(int x)
{
    doubleList* p = new doubleList;
    p->head = new Node;
    p->head->data = x;
    p->head->pre = NULL;
    p->head->next = NULL;
    p->tail = p->head;
    return p;
}

doubleList *addTail(doubleList* p, int x)
{
    Node* tmp = new Node;
    tmp->data = x;
    tmp->next = NULL;
    tmp->pre = p->tail;

    p->tail->next = tmp;
    p->tail = tmp;
    return p;
}

void printList(doubleList* p)
{
    Node* pos = p->head;
    while(pos != NULL)
    {
        cout << pos->data << " ";
        pos = pos->next;
    }

}
doubleList *addHead(doubleList* p, int x)
{
    Node* tmp = new Node;
    tmp->data = x;
    tmp->next = p->head;
    tmp->pre = NULL;

    p->head->pre = tmp;
    p->head = tmp;
    return p;
}

doubleList* addAt(doubleList* p, int pos, int tmp)
{
    Node* r = p->head;
    for(int i = 0; i < pos - 1; i++)
    {
        r = r->next;
    }

    Node* newNode = new Node;
    newNode->data = tmp;
    newNode->pre = r;
    newNode->next = r->next;
    r->next->pre = newNode;
    r->next = newNode;
    return p;
}
int main()
{
    int n, x, k; cin >> n >> x;
    doubleList* p = creatList(x);
    for(int i = 1; i< n; i++)
    {
        cin >> x;
        p = addTail(p, x);
    }
    cin >> k >> x;
    if(k == 0) p = addHead(p, x);
    else if(k == n) p = addTail(p, x);
    else p = addAt(p, k, x);

    printList(p);
    return 0;
}