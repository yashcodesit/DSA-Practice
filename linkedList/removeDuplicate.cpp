#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node* removeDuplicates(Node* head) {
    Node* curr = head;

    while(curr != NULL && curr->next != NULL) {

        if(curr->data == curr->next->data) {
            Node* dup = curr->next;
            curr->next = curr->next->next;
            delete dup;
        }
        else {
            curr = curr->next;
        }
    }

    return head;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Sorted Linked List
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);

    cout << "Original List: ";
    print(head);

    head = removeDuplicates(head);

    cout << "After Removing Duplicates: ";
    print(head);

    return 0;
}