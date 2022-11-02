class Solution {
private:
    
    int rightsum(vector<int>arr2){
        int sum=0;
        for(int i=0; i<arr2.size(); i++){
            sum=sum+arr2[i];
        }
        return sum;
    }
public:
    int pivotIndex(vector<int>& nums) {
        int l_sum = 0;
        int r_sum=rightsum(nums);
        for(int i = 0;i < nums.size();i++){  
            r_sum =r_sum-nums[i];
            if(l_sum == r_sum){
                return i;
            }
            l_sum += nums[i];
        }
        return -1;
        
    }
};