class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0; // To count the number of breaks in the sorted order
        for (int i = 1; i < n; i++) {
            // Check if the current element is greater than the next element
            if (nums[i-1] > nums[i]) {
                count++;
            }
        }
        //comparison between the last and the first element
        if(nums[n-1]>nums[0]){
            count++;
        } 
        return count<=1;   
    }
};