class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        
        if( nums[mid]<=nums[end] && nums[mid]>=nums[start]){
            int res=nums[start];
            return res;
        }
         
        while(start<end){
            if(nums[mid]>=nums[0])
            {
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
        }
        int ans=nums[start];
        return ans;
    }
};