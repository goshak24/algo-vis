#include <iostream>
#include <vector> 

typedef std::vector<int> VecInt; 

VecInt bubble_sort(VecInt nums); 

int main() {
    VecInt nums = {3,4,2,1,2,3,4}; 
    VecInt sorted = bubble_sort(nums); 

    std::cout << "Sorted: "; 
    for (int x : sorted) {
        std::cout << x << " ";
    } 
    std::cout << std::endl; // have to do an std::cout to do an std::endl 

    return 0; 
}

VecInt bubble_sort(VecInt nums) {
    for (int i = 0; i < nums.size(); i++) { // passes 
        for (int j = 0; j < nums.size() - i - 1; j++) { // comparisons 
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    
    return nums;
} 