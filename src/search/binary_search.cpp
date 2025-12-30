#include <iostream>
#include <vector>

typedef std::vector<int> VecInt; 

int binarySearch(VecInt& nums, int size, int target); 

int main() {
    VecInt nums = {1, 2, 3, 4}; 
    int index = binarySearch(nums, 4, 3); 
    std::cout << "Index: " << index << std::endl;

    return 0; 
}

int binarySearch(VecInt& nums, int size, int target) {
    if (size == 0) return -1; 

    int left = 0;
    int right = size - 1; 

    int midpoint = (right + left) / 2; 

    while (left <= right) {
        int midpoint = (right + left) / 2; 
        if (nums[midpoint] > target) {
            right = midpoint - 1;
        } else if (nums[midpoint] < target) {
            left = midpoint + 1; 
        } else {
            return midpoint; 
        }
    }

    return -1; 
} 