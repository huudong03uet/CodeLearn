#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int x)
{
    Node* result = new Node;
    result->next = result;
    result->data = x;
    return result;
}

void printList(Node* p, int pos)
{
    Node* result = p;
    for(int i = 0; i < pos; i++)
    {
        result = result->next;
    }
    cout << result->data << " ";
    Node* p2 = result->next;
    while(p2 != result)
    {
        cout << p2->data << " ";
        p2 = p2->next;
    }
}

Node* addTail(Node* p, int number_)
{
    Node* tmp = p;
    while(tmp->next != p)
    {
        tmp = tmp->next;
    }
    Node* temp = new Node;
    temp->data = number_;
    temp->next = p;
    tmp->next = temp;
 //   tmp = temp;
    return p;
}
int main()
{
    int n, x, k;
    cin >> n >> x;
    Node* l = createNode(x);
    Node* p = l;
    for(int i =  1; i < n; i++)
    {
        cin >> x;
        l = addTail(l, x);
    }
    cin >> k;
    printList(l, k);
}