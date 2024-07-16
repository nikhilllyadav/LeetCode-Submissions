class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) {
        return nums[0];  // If there's only one element, return it directly
    }
    
    // Assuming all other elements appear twice except one
    int max_num = *max_element(nums.begin(), nums.end());
    vector<int> hash(max_num + 1, 0);
    
    for (int i = 0; i < n; ++i) {
        hash[nums[i]]++;
    }
    
    for (int i = 0; i <= max_num; ++i) {
        if (hash[i] == 1) {
            return i; 
        }
    }
    
    return -1;  // Default return if no single occurrence found (not expected in your case)
}


};