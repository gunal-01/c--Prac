class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_map<int, int> map;
        for(int i : nums) {
            map[i]++;
        }
        int maxCount = 0;
        int keyWithMaxcount;
        for(const auto& pair : map) {
            if(pair.second > maxCount) {
                maxCount = pair.second;
                keyWithMaxcount = pair.first;
            }
        }
        return keyWithMaxcount;
    }
};