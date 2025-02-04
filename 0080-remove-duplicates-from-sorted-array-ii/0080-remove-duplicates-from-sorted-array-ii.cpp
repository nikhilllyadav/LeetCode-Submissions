class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=0;
        unordered_map<int,int>map;
        for(int i =0;i<nums.size();i++){
            if(map[nums[i]]<2){
                nums[index]=nums[i];
                index++;
                map[nums[i]]++;
            }
        }
        return index++;
    }
};