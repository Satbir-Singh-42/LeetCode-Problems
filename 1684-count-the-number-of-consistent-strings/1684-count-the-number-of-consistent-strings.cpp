class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;

        for (string word : words) {
            bool isConsistent = true;

            for (char c : word) {
                if (allowed.find(c) == string::npos) {
                    isConsistent = false;
                    break;
                }
            }

            if (isConsistent) {
                count++;
            }
        }

        return count;
    }
};
