#include <vector>

typedef std::vector<int> VecInt; 

class Stack {
    private: 
        VecInt nums;
    
    public: 
        // Default constructor - creates empty stack
        Stack() {
            nums = VecInt();
        }
        
        // Constructor with initial list
        Stack(VecInt nums_list) {
            nums = nums_list; 
        }

        bool isEmpty() {
            return nums.size() == 0;
        } 

        VecInt throwStack() {
            return nums;  
        }

        void onPush(int num) {
            nums.push_back(num); 
            // No return needed - void function just modifies the stack
        }

        void onPop() {
            if (!nums.empty()) {
                nums.pop_back();
            }
            // No return needed - void function just modifies the stack
        }
}; 