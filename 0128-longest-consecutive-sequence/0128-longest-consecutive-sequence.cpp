#include<bits/stdc++.h>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int longest=1;
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);   //sare unique elements set me chle gye
        }
        for(auto it : set){
            if(set.find(it-1)==set.end()){//agr prev consecutive element set me nahi hai 
                int count = 1;
                int x = it;
                while(set.find(x+1)!=set.end()){//agr next consecutive element set me hai
                    count=count+1;
                    x=x+1;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};