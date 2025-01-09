class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> arr;
        for(int  i = 0; i < m; i++ ) {
            arr.push_back(nums1[i]);
    }
        for(int i = 0; i < n; i++) {
            arr.push_back(nums2[i]);
        }
        // array will look like this [1,2,3,2,5,6]
        sort(arr.begin(), arr.end());
        nums1 = arr;
    }
};