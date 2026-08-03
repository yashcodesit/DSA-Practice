#include <iostream>

using namespace std;
class node{
public:
  int data;
  node* left;
  node* right;

  node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};
node* buildTree(node* root){
  cout<<"Enter the data"<<endl;
  int data;
  cin>>data;
  root = new node(data);
  if(data == -1){
    return NULL;
  }
  cout<<"Enter data left to "<< data << endl;
  root->left = buildTree(root->left);
  cout<<"Enter data right to "<< data <<endl;
  root->right = buildTree(root->right);
  return root;
}
void inOrder(node* root){
  if(root == NULL){
    return;
  }
  inOrder(root->left);
  cout<<root->data<<" ";
  inOrder(root->right);
}
void preOrder(node* root){
  if(root == NULL){
    return;
  }
  cout<<root->data<<" ";
  preOrder(root->left);
  preOrder(root->right);
}
void postOrder(node* root){
  if(root == NULL){
      return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
  node* root = NULL;
  root = buildTree(root);
  cout<<endl<<"In Order Traversal"<<endl;
  inOrder(root);
  cout<<endl<<"Pre Order Traversal"<<endl;
  preOrder(root);
  cout<<endl<<"Post Order Traversal"<<endl;
  postOrder(root);
  return 0;
}