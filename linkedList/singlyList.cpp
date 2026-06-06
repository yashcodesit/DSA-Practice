#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;
  node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};
void insertAtStart(node *&head, int data)
{
  node *temp = new node(data);
  temp->next = head;
  head = temp;
}
void insertAtEnd(node *&tail, int data)
{
  node *temp = new node(data);
  tail->next = temp;
  tail = temp;
}
void insertAtMiddle(node *&head, int data, int position)
{
  if (position == 0)
  {
    insertAtStart(head, data);
  }

  node *temp1 = new node(data);
  node *temp = head;
  int i = 0;
  while (temp != NULL && i < position - 1)
  {
    temp = temp->next;
    i++;
  }
  if (temp == NULL)
  {
    cout << "Invalid Position" << endl;
    return;
  }
  temp1->next = temp->next;
  temp->next = temp1;
}
void print(node *head)
{
  node *temp = head;

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next; // Move forward
  }
  cout << endl;
}
int main()
{
  node *node1 = new node(40);
  node *head = node1;
  node *tail = node1;
  insertAtEnd(tail, 10);
  insertAtEnd(tail, 20);
  insertAtEnd(tail, 30);
  insertAtMiddle(head, 50, 3);
  print(head);
  return 0;
}