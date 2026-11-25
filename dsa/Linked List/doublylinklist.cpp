#include <iostream>


class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};


class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Destructor to free allocated memory
    ~DoublyLinkedList() {
        Node* curr = head;
        while (curr != nullptr) {
            Node* nextNode = curr->next;
            delete curr;
            curr = nextNode;
        }
    }


    void insertFront(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }


    void insertBack(int val) {
        Node* newNode = new Node(val);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }


    void deleteValue(int val) {
        Node* curr = head;
        while (curr != nullptr && curr->data != val) {
            curr = curr->next;
        }

        if (curr == nullptr) return; // Value not found

        if (curr == head) head = curr->next;
        if (curr == tail) tail = curr->prev;
        if (curr->prev != nullptr) curr->prev->next = curr->next;
        if (curr->next != nullptr) curr->next->prev = curr->prev;

        delete curr;
    }

    void reverse() {
        Node* curr = head;
        Node* temp = nullptr;

    
        while (curr != nullptr) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev; // Move to the next node (which is now in prev)
        }

  
        if (temp != nullptr) {
            tail = head;
            head = temp->prev;
        }
    }


    void printForward() const {
        Node* curr = head;
        while (curr != nullptr) {
            std::cout << curr->data << " <-> ";
            curr = curr->next;
        }
        std::cout << "NULL\n";
    }


    void printBackward() const {
        Node* curr = tail;
        while (curr != nullptr) {
            std::cout << curr->data << " <-> ";
            curr = curr->prev;
        }
        std::cout << "NULL\n";
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertBack(10);
    dll.insertBack(20);
    dll.insertBack(30);
    dll.insertFront(5);

    std::cout << "Forward:  ";
    dll.printForward();   // 5 <-> 10 <-> 20 <-> 30 <-> NULL

    std::cout << "Backward: ";
    dll.printBackward();  // 30 <-> 20 <-> 10 <-> 5 <-> NULL

    dll.reverse();
    std::cout << "Reversed: ";
    dll.printForward();   // 30 <-> 20 <-> 10 <-> 5 <-> NULL

    dll.deleteValue(20);
    std::cout << "Deleted 20: ";
    dll.printForward();   // 30 <-> 10 <-> 5 <-> NULL

    return 0;
}
