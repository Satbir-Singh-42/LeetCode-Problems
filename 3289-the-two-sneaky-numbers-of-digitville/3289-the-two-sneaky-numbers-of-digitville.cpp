class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> arr(nums.size(), 0); // frequency array
        vector<int> sneaky;

        for (int x : nums) {
            arr[x]++;
            if (arr[x] == 2) {
                sneaky.push_back(x);
            }
        }
        return sneaky;
    }
};
