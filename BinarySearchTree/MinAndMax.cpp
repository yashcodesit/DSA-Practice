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
int maximum(node* root) {
    if (root == NULL) {
        return -1; 
    }

    if (root->right == NULL) {
        return root->data;
    }

    return maximum(root->right);
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

int main()
{
  node *root = NULL;
  cout << "Enter the data to create BST" << endl;
  insertData(root);
  cout << "BST is" << endl;
  cout<<"Maximum: "<<maximum(root)<<endl;
  cout<<"Minimum: "<<minimum(root);
  return 0;
}