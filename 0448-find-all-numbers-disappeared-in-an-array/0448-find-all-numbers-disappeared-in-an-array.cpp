class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int i =0;i<n;i++){
            freq[nums[i]]++;
        }
        vector<int>result;
        for(int i=1;i<=n;i++){
            if(freq[i]==0){
                result.push_back(i);
            }
        }
        return result;
    }
};