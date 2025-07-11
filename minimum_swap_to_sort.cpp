class Solution {
  public:
    // Function to find the minimum number of swaps required to sort the array.
    int minSwaps(vector<int>& arr) {
        // Code here
        int N = arr.size();
        vector<pair<int, int>> v(N);
    
        for (int i = 0; i < N; i++) {
            v[i] = {arr[i], i};
        }
        sort(v.begin(), v.end());
        int c = 0;
        for (int i = 0; i < N; i++) {
         
            if (v[i].second == i) {
                continue;
            } else {
                c++;
                swap(v[i], v[v[i].second]);
                i--;
            }
        }
    
        return c;
    }
};