class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        map<int , int > mpp;
        for(int i=0;i<arr.size();i++){
            int more = target - arr[i];
            if(mpp.find(more)!=mpp.end()){
                return {mpp[more],i};
            }
            mpp[arr[i]]=i;
        }
        return {};
    }
};






// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     return {i,j};
//                 }
//             }
//         }
//      return {};   
//     }
// };

