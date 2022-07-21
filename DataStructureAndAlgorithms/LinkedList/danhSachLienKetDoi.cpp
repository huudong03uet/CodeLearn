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

int main()
{
    int n; cin >> n;
    doubleList* p = creatList(1);
    for(int i = 2; i <= n; i++)
    {
        p = addHead(p, i);
        p = addTail(p, i);
    }
    printList(p);
    return 0;
}