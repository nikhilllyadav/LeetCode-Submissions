class Solution {
public:
    int romanToInt(string s) {
        int count=0;
        unordered_map<char,int> roman{
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };

        for(int i =0;i<s.length();i++){
            if(roman[s[i]]< roman[s[i+1]]){ // substractionCase: eg: IX which is X -I=9
                count-=roman[s[i]];
            }
            else{ //Addition Case: eg: XI which is X+I=11
                count+=roman[s[i]];
            }
        }
        return count;
    }
};