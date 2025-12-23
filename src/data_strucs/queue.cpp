#include <iostream>
#include "queue_imp.h"

// Function to run queue operations (called from main.cpp)
void runQueue() {
    int operation;
    Queue myQueue; // Create one queue that persists across operations
    
    for (;;) {
        std::cout << "\nChoose an operation:" << std::endl;
        std::cout << "1 - ENQUEUE" << std::endl;
        std::cout << "2 - DEQUEUE" << std::endl;
        std::cout << "3 - RETURN QUEUE" << std::endl; 
        std::cout << "0 - Return to main menu" << std::endl;
        std::cin >> operation; 

        switch (operation) {
            case 1: {
                int num;
                std::cout << "Enter a number to enqueue to the queue: ";
                std::cin >> num; 
                myQueue.enqueue(num); // Call enqueue with the entered number
                std::cout << "Enqueued " << num << " to the queue!" << std::endl;
                break;
            }
            case 2: {
                myQueue.dequeue();
                std::cout << "Dequeued from the queue!" << std::endl;
                break;
            }
            case 3: {
                std::cout << "The queue is currently: ";
                myQueue.throwQueue(); // throwQueue already handles printing
                break;
            }
            case 0:
                return; // Exit this function and return to main menu
            default:
                std::cout << "Invalid option!" << std::endl;
                break;
        }
    }
}; 