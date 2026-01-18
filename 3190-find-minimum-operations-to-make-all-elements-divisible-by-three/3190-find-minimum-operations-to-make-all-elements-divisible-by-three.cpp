class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operations = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 3 == 2){
                nums[i] += 1;
                operations++;
            }
            else if(nums[i] % 3 == 1){
                nums[i] -= 1;
                operations++;
            }
            // if divisible by 3, do nothing
        }
        return operations;
    }
};
