#include <iostream>
#include <queue>
#include <stack>

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
// Breadth first search (BFS)
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
void reverseLevelOrder(node* root) {
    if (root == NULL)
        return;

    queue<node*> q;
    stack<node*> s;

    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        s.push(temp);

        if (temp->right)
            q.push(temp->right);

        if (temp->left)
            q.push(temp->left);
    }

    while (!s.empty()) {
        cout << s.top()->data << " ";
        s.pop();
    }
}
int main(){
  node* root = NULL;
  root = buildTree(root);
  // 1 3 4 -1 -1 11 -1 -1 5 17 -1 -1 -1
  levelOrderTraversal(root);
  cout<<endl;
  cout<<endl;
  cout<<endl;
  reverseLevelOrder(root);
  return 0;
}