#include <iostream>
#include <vector>

typedef std::vector<int> VecInt; 

VecInt insertion_sort(VecInt nums); 

int main() {
    VecInt nums = {2,3,4,2,1,2,1143,3,12,2}; 
    VecInt sorted = insertion_sort(nums); 

    std::cout << "Sorted: ";
    for (int x : sorted) {
        std::cout << x << " "; 
    } 
    std::cout << std::endl; 
    return 0; 
}

VecInt insertion_sort(VecInt nums) {
    // loop through whole list 
    // compare element with last one, keep doing so until its in the correct place 
    // continue where you left off 

    for (int i = 1; i < nums.size(); i++) {
        for (int j = i; j > 0; j--) {
            if (nums[j-1] > nums[j]) {
                int temp = nums[j]; 
                nums[j] = nums[j-1]; 
                nums[j-1] = temp; 
            } 
        }
    }

    return nums; 
} 