class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> result;

        for (int id : order) {          // id = order[i]
            for (int f : friends) {     // f = friends[j]
                if (id == f) {
                    result.push_back(id);
                    break;
                }
            }
        }
        return result;
    }
};
