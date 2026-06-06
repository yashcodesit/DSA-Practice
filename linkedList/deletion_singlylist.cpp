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
void deleteByPos(int position, node *&head)
{
  if (position == 0)
  {
    node *temp = head;
    head = head->next;
    delete temp;
    return;
  }
  node *temp = head;
  int i = 0;
  while (i < position - 1)
  {
    temp = temp->next;
    i++;
  }
  node *del = temp->next;
  temp->next = del->next;
  delete del;
}
void deleteByValue(int value, node *&head)
{
  if (head == NULL)
    return;
  node *prev = NULL;
  node *curr = head;

  while (curr != NULL && curr->data != value)
  {
    prev = curr;
    curr = curr->next;
  }
  if (curr == NULL)
    return;

  prev->next = curr->next;
  delete curr;
}
void print(node *head)
{
  node *temp = head;

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
int main()
{
  node *node1 = new node(10);
  node *head = node1;
  insertAtStart(head, 20);
  insertAtStart(head, 40);
  insertAtStart(head, 30);
  insertAtStart(head, 35);
  print(head);
  deleteByPos(1, head);
  print(head);
  deleteByValue(20, head);
  print(head);

  return 0;
}