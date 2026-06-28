class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> counter;
        for(char c : magazine){
            counter[c - 'a']++;
        }
        for(char c : ransomNote){
            if(counter[c - 'a'] == 0){
                return false;
            }
            counter[c - 'a']--;
        }
        return true;
    }
};