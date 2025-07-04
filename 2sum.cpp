class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p=0;
        while(p<nums.size()){
            int rem=target-nums[p];
            for(int i=p+1;i<nums.size();i++){
            if(nums[i]==rem)
            return {p,i};
            }
            p++;
        }
        return {};  
    }
};