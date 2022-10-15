class Solution {
private:   
    void sets(int index, vector<vector<int>> &ans, vector<int> &nums, vector<int>v){
            ans.push_back(v);
       
            for(int j=index; j<nums.size(); j++){
                if(j!=index && nums[j]==nums[j-1]) 
                    continue;  
                v.push_back(nums[j]);  
                sets(j+1, ans, nums, v);
                v.pop_back();
            }
        
            
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(nums.begin(), nums.end());
        sets(0,ans,nums,v);
        return ans;
            
   
    }
};
