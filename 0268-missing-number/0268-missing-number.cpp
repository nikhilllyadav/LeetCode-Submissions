class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>hash(n+1,0);//n+1 size ka vector bnaya h initialised all elements with 0
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<=n;i++){ //make sure to put = sign as if u put < it will iterate only till second last element and not the last element
            if(hash[i]==0){
                return i;
            }
        }
        return -1;
    }
};