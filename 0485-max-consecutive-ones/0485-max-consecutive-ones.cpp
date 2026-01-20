class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;

        for (int i : nums) {
            if (i == 1) {
                count++;
                maxcount = max(maxcount, count);
            } else {
                count = 0;
            }
        }

        return maxcount;
    }
};
