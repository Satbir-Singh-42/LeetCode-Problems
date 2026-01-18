class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n, 0);

        int balls = 0;
        int moves = 0;

        for (int i = 0; i < n; i++) {
            ans[i] += moves;          // cost from balls on the LEFT
            if (boxes[i] == '1') {
                balls++;              // found a new ball
            }
            moves += balls;            // all left balls move one step
        }

        balls = 0;
        moves = 0;

        for (int i = n - 1; i >= 0; i--) {
            ans[i] += moves;          // cost from balls on the RIGHT
            if (boxes[i] == '1') {
                balls++;              // found a new ball
            }
            moves += balls;            // all right balls move one step
        }

        return ans;
    }
};
