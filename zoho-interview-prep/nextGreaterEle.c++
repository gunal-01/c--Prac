#include <iostream>
#include <vector>

std::vector<int> findClosestLarger(const std::vector<int>& nums) {
    std::vector<int> result(nums.size(), -1); // Initialize result with -1

    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[j] > nums[i]) {
                result[i] = nums[j];
                break;
            }
        }
    }

    return result;
}



int main() {
    std::vector<int> nums = {2,4,3,6,8,4};
    std::vector<int> result = findClosestLarger(nums);

    std::cout << "Output: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


// {1, 4, 2, 5, 4}