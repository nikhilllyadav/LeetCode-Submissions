class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            return nums[n/2];
        }
        return -1;
    }
};