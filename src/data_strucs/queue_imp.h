#include <iostream>
#include <vector>

typedef std::vector<int> VecInt; 

class Queue {
    private:
        VecInt nums; 
    
    public:
        Queue() { // Base implementation
            nums = VecInt(); 
        } 

        Queue(VecInt nums_list) {
            nums = nums_list; 
        }

        void enqueue(int num) {
            nums.push_back(num); 
        }

        void dequeue() {
            if (nums.empty()) {
                std::cout << "Queue is empty\n";
                return;
            }
            nums.erase(nums.begin());
        }

        void throwQueue() {
            VecInt v = nums; 

            if (nums.empty()) {
                std::cout << "Empty\n";
                return;
            }
            
            for (int x : v) {
                std::cout << x << " ";
            } 
            std::cout << std::endl;
        }
};