class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0; 
        int left =0, right= height.size()-1;
        while(left<right){
            int ht= min(height[left],height[right]);
            int width= right - left;
            int currWater= width*ht;
            maxWater= max(maxWater,currWater);
            if(height[left]<height[right]){ //choti height hai isliye badi height dhundhne k liye left++
                left++;
            }
            else{ //choti height mili isliye badi dhundhne k liye right--
                right--;
            }  
        }
        return maxWater;
    }
};