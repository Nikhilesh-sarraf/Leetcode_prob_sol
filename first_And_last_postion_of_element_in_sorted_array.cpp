class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        

         int n =arr.size();
       int start =0,end = n-1,first =-1,last=-1,mid;
       
       while(start<=end){
           mid=start+(end-start)/2;
           if(arr[mid]==x){
               first = mid;
               end = mid -1;
               
           }
           else if(arr[mid]>x){
               end = mid-1;
           }
           else{
               start = mid+1;
           }
              
       }
       
       start =0,end = n-1;
       while(start<=end){
           mid = start +(end-start)/2;
           if(arr[mid]==x){
           last = mid;
           start=mid+1;
       }
       else if(arr[mid]>x){
           end = mid-1;
       }
       else{
           start = mid+1;
       }
       }
       
       vector<int> nums(2);
       nums[0]=first;
       nums[1]=last;
       
       return nums;


    }
};