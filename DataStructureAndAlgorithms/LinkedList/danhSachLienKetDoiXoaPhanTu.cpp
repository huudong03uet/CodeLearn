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

doubleList* deleteHead(doubleList* start)
{
    Node* p = start->head->next;
    Node* tmp = start->head;
    p->pre = NULL;
    start->head = p;
    delete(tmp);
    return start;
}
doubleList* deleteTail(doubleList* start)
{
    Node* p = start->tail->pre;
    Node* tmp = start->tail;
    p->next = NULL;
    start->tail = p;
    delete(tmp);
    return start;
}
doubleList* deleteAt(doubleList* p, int pos)
{
    Node* r = p->head;
    for(int i = 1; i < pos; i++)
    {
        r = r->next;
    }
    Node* tmp = r->next;
    r->next = r->next->next;

    delete(tmp);
    r->next->pre = r;
    return p;
}
int main()
{
    int n, x, k;
	cin >> n;
	cin >> x;
	doubleList* l = creatList(x);
	for (int i = 1; i < n; i++){
		cin >> x;
		l = addTail(l, x);
	}
	cin >> k;
	if (k == 0){
		l = deleteHead(l);
	} else if (k == n-1){
		l = deleteTail(l);
	} else {
		l = deleteAt(l, k);
	}
	printList(l);
    return 0;
}