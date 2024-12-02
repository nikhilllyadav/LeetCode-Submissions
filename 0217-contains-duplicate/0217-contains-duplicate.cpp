class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>set;
        for(int i =0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        vector<int>ans;
        for(auto it: set){
            ans.push_back(it);
        }
        return ans!=nums;
    }
};