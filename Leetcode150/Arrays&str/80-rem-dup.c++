class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int j = 1, i = 1;
        int count = 1;
        while (i < nums.size()) {
            if (nums[i] == nums[i - 1]) {
                if (count < 2) {
                    nums[j] = nums[i];
                    j++;
                }
                count++;
            } else {
                nums[j] = nums[i];
                j++;
                count = 1;
            }
            i++;
        }
        return j;
    }
};