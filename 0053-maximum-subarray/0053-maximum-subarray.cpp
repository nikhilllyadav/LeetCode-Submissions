class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=nums[0];//initialising maxi with first element
        for(int i=0;i<nums.size();i++){
            //step1 
            sum+=nums[i];
            //step2
            maxi=max(maxi,sum);
            //step3
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};