class Solution {
public:
    bool isSubsequence(string s, string t) {
        string ans;
        for(int i =0;i<s.length();i++){
            for(int j=0;j<t.length();j++){
                if(s[i]==t[j]){
                    ans.push_back(s[i]);
                }
            }
        }   
        return ans==s;
    }
};