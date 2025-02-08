class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // ensure that every character in ransomNote appears in magazine with at least the same frequency.
        unordered_map<char,int>freq;
        //storing magazine ka character count into freq map
        for(char ch : magazine){
            freq[ch]++;
        }
        //check if ransomNote can be constructed
        for(char ch : ransomNote){
            if(freq[ch]==0){ //mtlb vo character magazine me hai hi nhi toh magazine se randomNote ban hi nhi skta
                return false;
            }
            freq[ch]--;
        }
        return true;
    }
};