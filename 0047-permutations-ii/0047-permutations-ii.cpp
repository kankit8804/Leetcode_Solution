class Solution {
private:
    void solve(vector<int>nums, vector<vector<int>>& ans,  int index){
        //base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int j=index; j<nums.size(); j++){
            if(j!=index && nums[j]==nums[index]) continue;
            
            swap(nums[index],nums[j]);
            
            solve(nums,ans,index+1);
            

        }
    }
    
public:
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int index=0;
        solve(nums,ans,index);
        return ans;
        
        
        
    }
};