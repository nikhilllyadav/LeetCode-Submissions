class Solution {
public:
    bool linearSearch(vector<int>&nums, int num) {
        int n = nums.size(); //size of array
        for (int i = 0; i < n; i++) {
            if (nums[i] == num)
                return true;
        }
        return false;
    }
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0; // Return 0 if the input array is empty
        }
        int n = nums.size(); //size of array
        int longest = 1;
        //pick a element and search for its
        //consecutive numbers:
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            int cnt = 1;
            //search for consecutive numbers
            //using linear search:
            while (linearSearch(nums, x + 1) == true) {
                x += 1;
                cnt += 1;
            }

            longest = max(longest, cnt);
        }
        return longest; 
    }
};