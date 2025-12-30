#include <iostream> 
#include "ll_node.h" 
#include <vector>

class LinkedList {
    private:
        Node* head;

    public: 
        LinkedList(Node* head) { 
            this->head = head; 
        }

        void insertAtHead(int val) {
            Node* temp = head;
            head = new Node(val, temp);
            std::cout << head->getVal() << std::endl;
        } 

        void insertAtTail(int val) {
            Node* newNode = new Node(val, nullptr);
        
            // Case 1: empty list
            if (head == nullptr) {
                head = newNode;
                return;
            }
        
            Node* curr = head;
        
            while (curr->next != nullptr) {
                curr = curr->next;
            }
        
            curr->next = newNode; // Regardless that node will now be tied to the new Node memory address. 
        }         

        void insertAtPosition(int val, int position) {
            // Case 1: insert at head
            if (position == 0 || head == nullptr) {
                head = new Node(val, head);
                return;
            }
        
            Node* prev = head;
        
            // Move prev to (position - 1)
            for (int i = 1; i < position && prev->next != nullptr; i++) {
                prev = prev->next;
            }
        
            // Insert new node
            prev->next = new Node(val, prev->next);
        } 

        void deleteHead() {
            if (head == nullptr) {
                return; 
            } else {
                Node* temp = head; 
                head = head->next; 
                delete temp; // Frees the old memory location so no memory is leaked 
            } 
        } 

        void deleteTail() {
            if (head == nullptr) {
                return; 
            }
            if (head->next == nullptr) {
                delete head; 
                head = nullptr; 
                return; 
            }

            Node* curr = head;

            while (curr->next->next != nullptr) { // second to last element 
                curr = curr->next; 
            } 

            delete curr->next; 
            curr->next = nullptr; 
        }

        void deleteAtPosition(int position) {
            if (head == nullptr || position <= 0) return;  // Empty list or invalid position
        
            if (position == 1) {  // Delete head
                Node* temp = head;
                head = head->next;
                delete temp;
                return;
            }
        
            Node* curr = head;
            for (int i = 1; i < position - 1; i++) {
                if (curr->next == nullptr) return; // position out of bounds
                curr = curr->next;
            }
        
            if (curr->next == nullptr) return;  // position out of bounds
        
            Node* temp = curr->next;        // Node to delete
            curr->next = temp->next;        // Bypass the node
            delete temp;                    // Free memory
        }        

        bool search(int value) { 
            Node* curr = head; 

            while (curr != nullptr) {
                if (curr->val == value) {
                    return true; 
                }
                curr = curr->next; 
            } 
            return false; 
        }

        int getSize() {
            Node* curr = head; 
            int size = 0; 

            while (curr != nullptr) {
                size += 1; 
                curr = curr->next; 
            } 

            return size; 
        } 

        void printForward() {
            Node* curr = head; 

            while (curr != nullptr) {
                std::cout << curr->val << " "; 
                curr = curr->next;
            } 
        } 

        void printBackward() {
            std::vector<int> values;
            Node* curr = head;
        
            while (curr != nullptr) {
                values.push_back(curr->val);
                curr = curr->next;
            }
        
            for (int i = values.size() - 1; i >= 0; i--) {
                std::cout << values[i] << " ";
            }
        }
};