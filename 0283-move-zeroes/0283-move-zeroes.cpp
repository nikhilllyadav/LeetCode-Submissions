class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i; //this makes sure j is at the first zero and than we'll point i next to it
                break;
            }
        }
        if (j == -1) return; //iska matlab array me koi zero hi nhi h
        //starting the iteration from the next index to the first zero
        for(int i= j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;//j ko aage badhao coz when it's zero i to increment ho hi rha h
            }
        }
    }
};