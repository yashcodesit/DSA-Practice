#include <iostream>
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
node *insertIntoBST(node *root, int d)
{
  if (root == NULL)
  {
    root = new node(d);
    return root;
  }
  if (d > root->data)
  {
    root->right = insertIntoBST(root->right, d);
  }
  else
  {

    root->left = insertIntoBST(root->left, d);
  }
  return root;
}
void insertData(node *&root)
{
  int data;
  cin >> data;
  while (data != -1)
  {
    root = insertIntoBST(root, data);
    cin >> data;
  }
}
void inOrder(node *root)
{
  if (root == NULL)
  {
    return;
  }
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}
node* inorderPredecessor(node* root, int key) {
    node* predecessor = NULL;

    while (root != NULL) {
        if (key > root->data) {
            predecessor = root;
            root = root->right;
        } else {
            root = root->left;
        }
    }

    return predecessor;
}

node* inorderSuccessor(node* root, int key) {
    node* successor = NULL;

    while (root != NULL) {
        if (key < root->data) {
            successor = root;
            root = root->left;
        } else {
            root = root->right;
        }
    }

    return successor;
}
int main()
{
  node *root = NULL;
  cout << "Enter the data to create BST" << endl;
  insertData(root);
  cout << "BST is" << endl;
  inOrder(root);
  int key;
  cout<<endl<<"Enter Key "<<endl;
  cin>>key;
  cout<<"Inorder Predecessor "<<inorderPredecessor(root,key)->data<<endl;
  cout<<"Inorder Predecessor "<<inorderSuccessor(root,key)->data;
  return 0;
}