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
node *reverse(node *&head, int k)
{
  if (head == NULL)
  {
    return NULL;
  }
  node *next = NULL;
  node *curr = head;
  node *prev = NULL;
  int count = 0;
  while (curr != NULL && count < k)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
  }
  if (next != NULL)
  {
    head->next = reverse(curr, k);
  }
  return prev;
}
int main()
{
  node *node1 = new node(10);
  node *head = node1;
  insertAtStart(head, 20);
  insertAtStart(head, 30);
  insertAtStart(head, 40);
  insertAtStart(head, 50);
  print(head);
  head = reverse(head, 2);
  cout<<endl;
  print(head);

  return 0;
}