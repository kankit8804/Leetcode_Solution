class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
       
        int ans=0;

        for(int i=1; i<pref.size(); i++){
            
            ans=ans^pref[i-1];
            pref[i]=ans^pref[i];
        }
        return pref;
    }
};