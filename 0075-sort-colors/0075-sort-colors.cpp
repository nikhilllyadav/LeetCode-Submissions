class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n =arr.size();
        int start=0;
        int end=n-1;
        int index=0;
        while(index<=end){
            if(arr[index]==0){
                swap(arr[start],arr[index]);
                start++; 
                index++;
            }
            else if(arr[index]==2){
                swap(arr[index],arr[end]);
                    end--;
            }
            else{
                index++;
            }
        
        }      
    }
};