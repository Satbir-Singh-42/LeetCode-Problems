class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> result;
        unordered_set<int> st(friends.begin(), friends.end());
        for(int i=0; i<order.size(); i++){
            if(st.count(order[i])){
                result.push_back(order[i]);
            }
        }
    return result;   
}
};