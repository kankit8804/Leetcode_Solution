class Solution {
public:
    string reverseWords(string s) {
        int left=0;
        for(int right=0; right<s.length();right++){
                if(s[right]==' '){
                      reverse(s.begin()+left,s.begin()+right);
                      left=right+1;
                }
            }
        reverse(s.begin()+left, s.end());
       
        return s;
        
    }
};