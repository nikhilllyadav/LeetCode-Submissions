class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part) != string::npos) { // Continue until 'part' is not found
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};