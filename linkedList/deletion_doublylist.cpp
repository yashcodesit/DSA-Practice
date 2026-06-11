#include <iostream>

using namespace std;
class node
{
public:
  int data;
  node *next;
  node *prev;

  node(int data)
  {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};
void insertStart(int data, node *&head)
{
  node *temp = new node(data);
  temp->next = head;
  head->prev = temp;
  head = temp;
}
void insertPos(node *&head, int data, int pos)
{
    if(pos == 0)
    {
        insertStart(data, head);
        return;
    }

    node *temp = head;
    int i = 0;

    while(i < pos - 1 && temp != NULL)
    {
        temp = temp->next;
        i++;
    }

    if(temp == NULL)
        return;

    node *newNode = new node(data);

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}
void printForward(node *&head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
void printbackward(node *&head)
{
  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->prev;
  }
}
int main()
{
  node *n1 = new node(10);
  node *head = n1;
  insertPos(head, 15, 1);
  insertPos(head, 20, 2);
  insertPos(head, 30, 3);
  insertPos(head, 40, 4);
  printForward(head);
  return 0;
}