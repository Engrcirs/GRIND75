//Two pointers method
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0; //left pointer index 0
        int right = s.length() - 1; //right pointer index length - 1
        while(left < right){
            //Skip if non-alphanumeric in left
            while(left < right && !isalnum(s[left])){
                left++;
            }
            //Skip if non-alphanumeric in right
            while(left < right && !isalnum(s[right])){
                right--;
            }
            //Return false if not equal it means is not valid palindrome
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            //Increment left and increment right to further check if it is equal
            left++;
            right--;
        }
        return true;
    }
};