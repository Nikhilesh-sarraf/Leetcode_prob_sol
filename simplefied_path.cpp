class Solution {
public:    
    string simplifyPath(string path) {

        stack<string>st;
        string rest;
        for (int i = 0; i < path.size(); ++i) {
            if (path[i] == '/')
                continue;
            string temp;
            while (i < path.size() && path[i] != '/') {
                temp += path[i];
                ++i;
            }
            if (temp == ".") {
                continue;
            } else if (temp == "..") {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(temp);
            }
        }
        while (!st.empty()) {
            rest = "/" + st.top() + rest;
            st.pop();
        }
        if (rest.empty()) {
            return "/";
        }
        return rest;
    } 
    };