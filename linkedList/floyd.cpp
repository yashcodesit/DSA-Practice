#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
};
bool floydcycle(Node* head) {
  Node* fast = head;
  Node* slow = head;
  while(slow != NULL && fast != NULL){
    fast = fast->next;
    if(fast != NULL ){
      fast = fast->next;
    }
    slow = slow->next;
    if(slow == fast){
      return true;
    }
  }
  return false;

}

int main() {
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = third;

    if (floydcycle(head))
        cout << "Cycle Detected" << endl;
    else
        cout << "No Cycle" << endl;

    return 0;
}