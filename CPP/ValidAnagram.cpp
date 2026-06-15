class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        std::vector<int> freq(26, 0);
        for(int i = 0; i < s.length(); i++)
        {
            //ASCII lowercase a is 97
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for(int count_freq : freq)
        {
            if(count_freq != 0){
                return false;
            }
        }
        return true;
    }
};