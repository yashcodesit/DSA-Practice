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
  return 0;
}