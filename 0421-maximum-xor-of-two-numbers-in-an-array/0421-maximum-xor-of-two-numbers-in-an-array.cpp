class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int max_xor=0 , mask=0;
        for(int i=31; i>=0; i--){
            mask=mask|(1<<i);
            unordered_set<int>st;
            int temp=max_xor|(1<<i);
            for(int j=0; j<nums.size(); j++){
                int num=nums[j]&mask;
                if(st.find(temp^num)!=st.end()){
                    max_xor=temp;
                    break;
                }
                st.insert(num);
            }
            st.clear();
        }
        
        return max_xor;
    }
};