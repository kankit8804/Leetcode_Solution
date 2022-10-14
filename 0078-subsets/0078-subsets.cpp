class Solution {
private:
    void sets(int index, vector<vector<int>> &ans, vector<int> &nums, vector<int>v){
        //base case
        if(index>=nums.size()){            
            ans.push_back(v);
            return;
        }
        
        sets(index+1, ans, nums,v);
    
        int el=nums[index]; 
        v.push_back(el);
        
        sets(index+1, ans, nums, v);
     
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        int index=0;
        sets(index,ans,nums,v);
        return ans;
            
    }
};