#include <iostream>

using namespace std;
class node{
  public:
  int data;
  node* next;
  node* prev;
  node(int data){
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};
void insertPos(node* &head,int data,int pos){
  if(pos == 0){
    node* temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
  }
  else{
    node* temp = head;
    for(int i = 0; i<pos-1; i++){
      temp = temp->next;
    }
    node* newNode = new node(data);
    newNode->next = temp->next;
    if(temp->next != NULL){
      temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
  }
}
void print(node* &head){
  node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}
int main(){
  node* n1 = new node(10);
  node* head = n1;
  insertPos(head,20,1);
  insertPos(head,30,2);
  insertPos(head,40,3);
  insertPos(head,50,4);
  print(head);
  return 0;
}