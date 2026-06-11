#include <iostream>

using namespace std;
class node{
  public:
  int data;
  node* next;
  
  node(int data){
    this->data = data;
    this->next = NULL;
  }
};
void insert(int data ,node* &head){
  node* n1 = new node(data);
  n1->next = head;
  head = n1;
}
void reverse(node* &head){
  node* temp = head;
  node* prev = NULL;
  node* next = NULL;
  while(temp != NULL){
    next = temp->next;
    temp->next = prev;
    prev = temp;
    temp = next;
  }
  head = prev;
}
void print(node* &head){
  node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}
int main(){
  node* n1 = new node(10);
  node* head = n1;

  insert(20,head);
  insert(30,head);
  insert(40,head);
  cout<<"Before reverse "<<endl;
  print(head);
  reverse(head);
  cout<<endl<<"After reverse "<<endl;
  print(head);
  return 0;
}