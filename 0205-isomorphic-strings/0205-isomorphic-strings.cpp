class Solution {
public:
    bool isIsomorphic(string s1, string s2) {
        if (s1.length() != s2.length()) return false; // length unequal h, false return krdo
        unordered_map<char, int> m1, m2; //2 maps bana liye
        for (int i = 0; i < s1.length(); ++i) {
            // If character not seen before, store its first occurrence index
            if (m1.find(s1[i]) == m1.end()) { //if character is not found it returns m1.end(pointing beyond the last character)
                m1[s1[i]] = i; // agr character nhi h toh i daldo map me
            }
            if (m2.find(s2[i]) == m2.end()) {
                m2[s2[i]] = i;
            }
            // Check if the first occurrence indices match
            if (m1[s1[i]] != m2[s2[i]]){
                return false;
            }
        }
        return true;
    }
};

