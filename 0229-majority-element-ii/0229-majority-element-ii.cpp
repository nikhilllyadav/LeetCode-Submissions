class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector<int>ans;
       unordered_map<int , int >counts;
        int n= nums.size();

        for(int i=0;i<n;i++){
            counts[nums[i]]++;
        }
        for(auto it= counts.begin();it!=counts.end();it++){
            if(it->second>n/3){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};