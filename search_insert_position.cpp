class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int index;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
            return mid;
            }
            else if(nums[mid]<target)
            {
                index=mid+1;
                low=mid+1;
            }
            else{
                index=mid;
                high=mid-1;
            }

        }
        return index;

    }
};