class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);

    }

    void reverse(vector<int>& nums, int start, int end) {
        while(start < end) {
            swap(nums[start], nums[end]);
            start += 1;
            end -= 1;
        }
    }
};



/*
pseudocode:

function rotateArray(nums, k):
    n = length of nums
    k = k % n  // In case k is greater than n

    // Step 1: Reverse the entire array
    reverse(nums, 0, n-1)

    // Step 2: Reverse the first k elements
    reverse(nums, 0, k-1)

    // Step 3: Reverse the remaining n-k elements
    reverse(nums, k, n-1)

function reverse(array, start, end):
    while start < end:
        swap(array[start], array[end])
        start += 1
        end -= 1
*/