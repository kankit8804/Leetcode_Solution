class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>res;
        
        //res[0]=arr[0];
        
        for(int i=1; i<arr.size(); i++){
            arr[i]=arr[i]^arr[i-1];
        }
        
        for(int i=0; i<queries.size(); i++){
            int start=queries[i][0];
            int end=queries[i][1];
            
            if(start==0){
                res.push_back(arr[end]);
            }
            else{
                res.push_back(arr[end]^arr[start-1]);
            }
        }
        
        
 // Brute forece approach       
//         for(int i=0; i<queries.size();i++){
//            int ans=0;
//             for(int j=queries[i][0]; j<=queries[i][1]; j++){
                
//                  ans=ans^arr[j];
               
//             } res.push_back(ans);
//         }
        return res;
    }
};