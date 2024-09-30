class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for(int i =0;i<s.length();i++){
            if(isalnum(s[i])){
                result+=tolower(s[i]);
            }
        }
        string check=result;
        reverse(result.begin(),result.end());
        if(result==check){
            return true;
        }
        return false;
    }
};