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
int minimum(node* root) {
    if (root == NULL) {
        return -1;
    }

    if (root->left == NULL) {
        return root->data;
    }

    return minimum(root->left);
}
node* deleteNode(node* root, int key) {
  if (root == NULL) return NULL;

  if (key < root->data) {
    root->left = deleteNode(root->left, key);
  }
  else if (key > root->data) {
    root->right = deleteNode(root->right, key);
  }
  else {
    if (root->left == NULL && root->right == NULL) {
      delete root;
      return NULL;
    }
    if (root->left != NULL && root->right == NULL) {
      node* temp = root->left;
      delete root;
      return temp;
    }
    if (root->left == NULL && root->right != NULL) {
      node* temp = root->right;
      delete root;
      return temp;
    }

    int minval = minimum(root->right);
    root->data = minval;
    root->right = deleteNode(root->right, minval);
  }

  return root;
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
int main()
{
  node *root = NULL;
  cout << "Enter the data to create BST" << endl;
  insertData(root);
  cout << "BST is" << endl;
  inOrder(root);
  int key;
  cout<<endl<<"Enter node to Delete"<<endl;
  cin>>key;
  deleteNode(root,key);
  cout<<endl<<"After deletion"<<endl;
  inOrder(root);
  return 0;
}