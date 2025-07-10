class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        
        int ans = 0;
        sort(ages.begin(),ages.end());
        for(int i=ages.size()-1;i>0;i--){
            int x = i;
            int y = x - 1;
            while(y >= 0){
                double y_age = (0.5 * ages[x]) + 7;
                if(ages[y] > y_age){
                    ++ans;
                    if(ages[x] == ages[y]) ++ans;
                }
                
                // cout<<y_age<<"  "<<ages[x]<<" "<<ages[y]<<" "<<ans<<endl;
                y--;
            }
        }
        return ans;
    }
};