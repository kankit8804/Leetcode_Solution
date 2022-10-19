class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            
            if(numbers[i]+numbers[j]<target)
                i++;
            
            else if(numbers[i]+numbers[j]>target)
                --j;
            else{
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
                ++i;
            }
            }
        return ans;
    }
};