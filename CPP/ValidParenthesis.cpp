class Solution {
public:
    bool isValid(string s) {
        //Initialize stack
        stack<char> st;
        for(int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if(s[i] == '(' || s[i] =='[' || s[i] =='{'){
                //Push the open parenthesis
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    // If stack is empty, there is no matching opening bracket
                    return false;
                }
                // Get the top element and remove it from the stack
                char top = st.top();
                st.pop();
                // Check if the closing bracket matches the most recent opening bracket
                if((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')){
                    return false;
                }
            }
        }
        // If the stack is empty, all brackets were matched properly.
        // If it's not empty, there are unmatched opening brackets left.
        return st.empty();
    }
};