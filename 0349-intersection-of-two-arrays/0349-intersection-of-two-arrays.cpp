class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> seen;  // To store unique intersection elements

        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j] && seen.find(nums1[i]) == seen.end()) {
                    ans.push_back(nums1[i]);
                    seen.insert(nums1[i]);  // Mark this element as seen to ensure uniqueness
                    // break;  // Break after finding the first valid match to avoid duplicates
                }
            }
        }
        return ans;
    }
};