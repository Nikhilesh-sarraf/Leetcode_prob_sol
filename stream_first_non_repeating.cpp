class Solution {
  public:
    string FirstNonRepeating(string &s) {
        // Code here
       int n = s.size();
        queue<char> qu;
        string ans = "";
        vector<int> freq(26, 0);
        
        for (int i = 0; i < n; i++) {
            qu.push(s[i]);
            freq[s[i] - 'a']++;
            
            while (!qu.empty() && freq[qu.front() - 'a'] >= 2) {
                qu.pop();
            }
            
            if (qu.empty())
                ans += "#";
            else
                ans += qu.front();
        }
        return ans;
    }
};