class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for(int i =0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'|| s[i]>=0 && s[i]<=9 ){
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