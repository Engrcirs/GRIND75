//Reverse function

class Solution {
public:
    bool isPalindrome(string s) {
        std:: string cleanString = "";
        for(char c : s)
        {
            if(isalnum(c)){
                cleanString += tolower(c);
            }
        }
        std::string reverse_string = cleanString;
        std::reverse(reverse_string.begin(), reverse_string.end());
        return cleanString == reverse_string;
    }
};