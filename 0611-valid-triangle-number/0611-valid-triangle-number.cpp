class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int k=2; k<n; k++){
            int i=0, j=k-1;
            while(i<j){
                if(nums[i]+nums[j]>nums[k]){
                    ans+=j-i;
                    j-=1;    
                }
                else{
                    i+=1;
                }           
            }
        }
        return ans;
        
        
    }
};