class Solution {
public:
    string truncateSentence(string s, int k) {
       // Step 1: Split the sentence into words
        istringstream iss(s);
        vector<string> words;
        string word;
        while (iss >> word) {
            words.push_back(word);
        }

        // Step 2: Take the first k words and join them into a single string
        string result;
        for (int i = 0; i < k; ++i) {
            if (i > 0) result += " ";
            result += words[i];
        }
        
        return result;
    }
};