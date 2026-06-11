#include <iostream>

using namespace std;
class node{
  public:
  int data;
  node* prev;
  node * next;
  
  node(int data){
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};
void insert(int data ,node* &head){
  node* temp = new node(data);
  temp->next = head;
  head->prev = temp;
  head = temp;
}
void printForward(node* &head){
  node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}
void printbackward(node* &head){
  node* temp = head;
  while(temp->next!=NULL){
    temp = temp->next;
  }
  while(temp !=NULL){
    cout<<temp->data<<" ";
    temp = temp->prev;
  }
}
int main(){
  node* n1 = new node(10);
  node* head = n1;
  insert(20,head);
  insert(30,head);
  insert(40,head);
  insert(50,head);
  insert(60,head);
  printForward(head);
  cout<<endl<<"Reverse"<<endl;
  printbackward(head);
  return 0;
}