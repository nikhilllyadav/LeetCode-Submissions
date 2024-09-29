class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>set;
        for(int i =0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        int index=0;
        for(auto it: set){ //iterating in to the set
            nums[index]=it;//set se array me wapis bhejre h elements
            index++; //index ko increment krre hai
        }
        return index;
    }
};