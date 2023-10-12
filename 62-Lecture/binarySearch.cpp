#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrderTraversal(node* root){

    if( root == NULL){
        return;
    }
    //LNR : LEFT NODE RIGHT
    inOrderTraversal(root -> left);
    cout<< root -> data << " ";
    inOrderTraversal(root -> right);

}

void preOrder( node* root){
    //NLR : NODE LEFT RIGHT
    if( root == NULL) return;

    cout<< root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);

}

void postOrder( node* root){
    // LRN : LEFT RIGHT NODE
    if( root == NULL) return;

    postOrder(root -> left);
    postOrder(root -> right);
    cout<< root -> data << " ";
}

node *buildTree(node *root)
{

    cout << "Enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for Inserting in left " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for Inserting in right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}



int main()
{
    node *root = NULL;
    root = buildTree(root);
    cout << "Tree : " << endl;
    levelOrderTraversal(root);
    return 0;
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1