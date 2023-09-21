/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *sortList(Node *head)
{
    // Write your code here.
    if (!head || !head->next)
        return head;
    // Convert the linked list into vector
    vector<int> v;
    Node *temp = head;
    while (temp)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    // Sort the vector
    sort(v.begin(), v.end());

    // Converting back the vector into linked list
    temp = head;
    int count = 0;
    while (temp)
    {
        temp->data = v[count];
        temp = temp->next;
        count++;
    }

    return head;
}