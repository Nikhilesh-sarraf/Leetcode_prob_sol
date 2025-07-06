// method -1

class Solution {
public:
    int longestValidParentheses(string s) {
        

        int left = 0, right = 0, maxLength = 0;

        // Left to Right Scan
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                left++;
            } else {
                right++;
            }

            if (left == right) {
                maxLength = max(maxLength, 2 * right);
            } else if (right > left) {
                left = right = 0;  // Reset counters when more ')' than '('
            }
        }

        // Right to Left Scan (to handle cases like "(()(")
        left = right = 0;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] == '(') {
                left++;
            } else {
                right++;
            }

            if (left == right) {
                maxLength = max(maxLength, 2 * left);
            } else if (left > right) {
                left = right = 0;  // Reset when more '(' than ')'
            }
        }

        return maxLength;
    }
};






// method-2


class Solution {
public:
    int longestValidParentheses(string s) {
        


        stack<int> st;
        int maxLength = 0;
        st.push(-1);  // Base index to handle edge cases

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                st.push(i);  // Push index of '('
            } else {
                st.pop();  // Pop previous index
                if (st.empty()) {
                    st.push(i);  // Reset base index for next valid substring
                } else {
                    maxLength = max(maxLength, i - st.top());
                }
            }
        }
        return maxLength;
    }
};