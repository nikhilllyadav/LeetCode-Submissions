class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
        //index ko 0 se start kro aur jo element value se equal nhi h usko nums[index] me dalte jao
        // starting from zero and then increment index isse array vaha tk fill hojayega jitne val ke equal nhi h aur fir index ki value return krdena
    }
};