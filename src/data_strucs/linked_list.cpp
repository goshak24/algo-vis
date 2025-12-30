#include <iostream>
#include "ll_imp.h"

void runLinkedList() {
    int operation;
    LinkedList myList(nullptr);

    for (;;) {
        std::cout << "\nChoose an operation:\n";
        std::cout << "1 - INSERT AT HEAD\n";
        std::cout << "2 - INSERT AT TAIL\n";
        std::cout << "3 - INSERT AT POSITION\n";
        std::cout << "4 - DELETE HEAD\n";
        std::cout << "5 - DELETE TAIL\n";
        std::cout << "6 - DELETE AT POSITION\n";
        std::cout << "7 - SEARCH\n";
        std::cout << "8 - GET SIZE\n";
        std::cout << "9 - PRINT FORWARD\n";
        std::cout << "10 - PRINT BACKWARDS\n";

        std::cout << "0 - Return to main menu\n";

        std::cin >> operation;

        switch (operation) {
            case 1: {
                int num;
                std::cout << "Enter number: ";
                std::cin >> num;
                myList.insertAtHead(num);
                break;
            }
            case 2: {
                int num;
                std::cout << "Enter number: ";
                std::cin >> num;
                myList.insertAtTail(num);
                break;
            }
            case 3: {
                int num, pos;
                std::cout << "Enter number and position: ";
                std::cin >> num >> pos;
                myList.insertAtPosition(num, pos);
                break;
            }
            case 4: {
                myList.deleteHead();
                break;
            }
            case 5: {
                myList.deleteTail();
                break;
            }
            case 6: {
                int pos;
                std::cout << "Enter position: ";
                std::cin >> pos;
                myList.deleteAtPosition(pos);
                break;
            }
            case 7: {
                int num;
                std::cout << "Enter number to search: ";
                std::cin >> num;
                bool found = myList.search(num);
                std::cout << (found ? "Found" : "Not found") << std::endl;
                break;
            }
            case 8: {
                int size = myList.getSize();
                std::cout << "Size: " << size << std::endl;
                break;
            }
            case 9: {
                myList.printForward();
                std::cout << std::endl;
                break;
            }
            case 10: {
                myList.printBackward();
                std::cout << std::endl;
                break;
            }
            case 0:
                return;
            default:
                std::cout << "Invalid option\n";
        }
    }
} 