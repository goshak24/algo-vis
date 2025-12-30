#include <iostream>

class LinkedList; 

class Node {
    private:
        int val; 
        Node* next; 
    
    public: 
        Node(int value, Node* pointer) {
            val = value; 
            next = pointer; 
        } 

        int getVal() {
            return val;
        }

        Node* getNext() {
            return next;
        }

        friend class LinkedList; 
}; 
