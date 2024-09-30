class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans;
        for (int i = 0; i < arr.size(); i++) {
            set<long long >s;
            for (int j = 0; j < arr.size(); j++) {
                if (arr[j] < arr[i]) {
                    s.insert(arr[j]);
                }
            }
        ans.push_back(s.size() + 1) ;
        }
    return ans;
    }
};