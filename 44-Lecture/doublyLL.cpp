#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Traversing the linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Length of the linked list
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }
    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }
    // 1st  Creating a node
    Node *nodeToInsert = new Node(d);
    // 2nd  nodetoinsert ka next point karado temp k next k sath
    nodeToInsert->next = temp->next;
    // 3rd  tem ka next aur uska prev ko point karado nodetoinsert k sath
    temp->next->prev = nodeToInsert;
    // 4th temp ka next ko point karado nodetoinsert k sath
    temp->next = nodeToInsert;
    // 5th nodetoinsert ka prev point karado temp k sath
    nodeToInsert->prev = temp;
    // chaaro pointers point ho gaye
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    // cout << getLength(head) << endl;

    insertAtHead(head, tail, 9);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;
    insertAtHead(head, tail, 8);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;
    insertAtHead(head, tail, 7);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    insertAtTail(head, tail, 13);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;
    insertAtTail(head, tail, 14);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;
    insertAtTail(head, tail, 15);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;
    // cout << getLength(head) << " size" << endl;

    insertAtPosition(tail, head, 3, 100);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    insertAtPosition(tail, head, 2, 110);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    return 0;
}