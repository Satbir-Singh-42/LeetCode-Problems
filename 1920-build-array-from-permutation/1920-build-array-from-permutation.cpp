class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);  // pre-allocate vector

        for (int i = 0; i < n; i++) {
            ans[i] = nums[nums[i]];  // assign directly
        }

        return ans;
    }
};
