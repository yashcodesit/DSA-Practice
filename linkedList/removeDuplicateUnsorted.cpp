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
Node* findMid(Node* head) {
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
Node* merge(Node* left, Node* right) {

    if(left == NULL)
        return right;

    if(right == NULL)
        return left;

    Node* ans = new Node(-1);
    Node* temp = ans;

    while(left != NULL && right != NULL) {

        if(left->data < right->data) {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while(left != NULL) {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while(right != NULL) {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    return ans;
}
Node* mergeSort(Node* head) {

    if(head == NULL || head->next == NULL)
        return head;

    Node* mid = findMid(head);

    Node* left = head;
    Node* right = mid->next;

    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    Node* result = merge(left, right);

    return result;
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

    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 2);

    cout << "Original List: ";
    print(head);

    mergeSort(head);
    head = removeDuplicates(head);

    cout << "After Removing Duplicates: ";
    print(head);

    return 0;
}