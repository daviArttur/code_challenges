class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.length()==0)return 0;

        int sLen = s.size();

        vector<int> words;

        for(int i = 0; i < sLen; i++) {
            string substring = "";
            for(int j = i; j < sLen; j++) { 
                size_t contains = substring.find(s[j]);
                if((s[i] != s[j] || i == j)) {
                    if (contains != string::npos) {
                        break;
                    } else {
                        substring.push_back(s[j]);
                    }
                } else {
                    break;
                }   
            }
            words.push_back(substring.size());
        }
        
        int gran = words[0];

        for(int i = 0; i < words.size(); i++) {
            if (gran < words[i]) {
                gran = words[i];
            }
        }
        return gran;
    }
};
