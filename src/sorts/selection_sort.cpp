#include <vector>
#include <iostream>

typedef std::vector<int> VecInt; 

VecInt selection_sort(VecInt nums); 

int main() {
    VecInt nums = {3,4,2,1,2,3,4}; 
    VecInt sorted = selection_sort(nums); 

    std::cout << "Sorted: "; 
    for (int x : sorted) {
        std::cout << x << " ";
    } 
    std::cout << std::endl; 
    return 0; 
}

VecInt selection_sort(VecInt nums) { 
    for (int i = 0; i < nums.size(); i++) {
        int minimum = nums[i]; 
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] < minimum) {
                nums[i] = nums[j];
                nums[j] = minimum; 
                minimum = nums[i]; 
            }
        }
    }

    return nums; 
}