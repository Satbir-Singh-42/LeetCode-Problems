class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n, 0);
        
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                arr[i] = 0;
            } else {
                arr[i] = 1;
            }
        }

        // Step 3: sort the array
        sort(arr.begin(), arr.end());

        return arr;
    }
};
