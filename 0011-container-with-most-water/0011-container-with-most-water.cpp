class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxvolume=0;
        int i=0, j=height.size()-1;
        while(i<j){
            int volume=0;
            if(height[i]!=height[j]){
                volume=min(height[i],height[j])*(j-i);
                maxvolume=max(volume,maxvolume);
                if(height[i]<height[j])
                    i++;
                else
                    j--;
            }
            else{
                volume=height[i]*(j-i);
                maxvolume=max(volume,maxvolume);
                if(height[i]<height[j])
                    i++;
                else
                    j--;
            }
            
        }
        return maxvolume;
    }
};