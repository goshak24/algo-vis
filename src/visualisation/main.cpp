#include <iostream>
#include "../data_strucs/stack.cpp"
#include "../data_strucs/queue.cpp"

int option; 

int main() {
    std::cout << "-----------------------------WELCOME TO ALGO-VIS-------------------------------\n";
    
    for (;;) { // Same as "while true"
        std::cout << "-------------------------PLEASE SELECT AN ALGORITHM----------------------------\n";
        // Allow user to select an input number for which algorithm to simulate 
        std::cin >> option; // Needs to read input on each iteration (so place inside of loop)

        switch (option) {
            case 1: 
                std::cout << "You've selected Stack" << std::endl;
                runStack(); // Call the stack function to handle stack operations
                break; 
            case 2: 
                std::cout << "You've selected Stack" << std::endl;
                runQueue(); // Call the queue function to handle stack operations
                break;
            case 0:
                std::cout << "Exiting..." << std::endl;
                return 0;
            
            default:
                std::cout << "You've not selected an available option" << std::endl;
                break;
        }
    }

    return 0; 
} 