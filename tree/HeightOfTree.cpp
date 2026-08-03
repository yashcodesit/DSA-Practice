#include <iostream>
#include <queue>
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
void levelOrderTraversal(node* root){
  queue<node*> q;
  q.push(root);
  q.push(NULL);
  
  while(!q.empty()){
    node* temp = q.front();
    q.pop();
    if(temp == NULL){
      cout<<endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout<<temp->data<<" ";
      if(temp-> left){
        q.push(temp->left);
      }
      if(temp->right){
        q.push(temp->right);
      }
    }
  }
}
int height(node* root){
  if(root == NULL){
    return 0;
  }
  int left = height(root->left);
  int right = height(root->right);
  int count = max(left,right)+1;
  return count;
}
int main(){
  node* root = NULL;
  root = buildTree(root);
  levelOrderTraversal(root);
  int h = height(root);
  cout<<endl;
  cout<<h;

  return 0;
}