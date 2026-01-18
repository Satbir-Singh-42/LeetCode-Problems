class Solution {
public:
    int finalValueAfterOperations(vector<string>& web) {
        int x=0;
        for(string i:web){
            if (i[1]=='+')
            x++;
            else
            x--;
        }
        return x;
        
    }
};