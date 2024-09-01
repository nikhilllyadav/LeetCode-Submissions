class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        int nonZero=0;
        //nonzero elements ko temp me insert krdo
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
                nonZero++;
            }
        }
        // temp ke elements ko wapis nums me insert krdo 
        for(int i=0;i<nonZero;i++){
            nums[i]=temp[i];
        }
        for(int i=nonZero;i<nums.size();i++){
            nums[i]=0;
        }
    }
};