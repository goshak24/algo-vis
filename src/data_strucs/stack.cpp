#include <iostream> 
#include "stack_imp.h" 

// Function to run stack operations (called from main.cpp)
void runStack() {
    int operation;
    Stack myStack; // Create one stack that persists across operations
    
    for (;;) {
        std::cout << "\nChoose an operation:" << std::endl;
        std::cout << "1 - PUSH" << std::endl;
        std::cout << "2 - POP" << std::endl;
        std::cout << "3 - RETURN STACK" << std::endl; 
        std::cout << "0 - Return to main menu" << std::endl;
        std::cin >> operation; 

        switch (operation) {
            case 1: {
                int num;
                std::cout << "Enter a number to push to the stack: ";
                std::cin >> num; 
                myStack.onPush(num); // Call onPush with the entered number
                std::cout << "Pushed " << num << " to the stack!" << std::endl;
                break;
            }
            case 2: {
                myStack.onPop();
                std::cout << "Popped from the stack!" << std::endl;
                break;
            }
            case 3: {
                std::cout << "The stack is currently: ";

                VecInt v = myStack.throwStack(); 
                if (v.empty()) {
                    std::cout << "(empty)";
                } else {
                    for (int x : v) {
                        std::cout << x << " ";
                    }
                }
                std::cout << std::endl;
                break;
            }
            case 0:
                return; // Exit this function and return to main menu
            default:
                std::cout << "Invalid option!" << std::endl;
                break;
        }
    }
} 