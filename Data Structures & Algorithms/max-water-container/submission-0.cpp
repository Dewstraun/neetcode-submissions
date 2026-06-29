class Solution {
public:
    int maxArea(vector<int>& heights) {
        vector<int>maxareas;

        for(int i=0;i<heights.size()-1;i++){
            int maxar=0;
            for(int j=i+1;j<heights.size();j++){
                int area=0;
                if(heights[i]<heights[j]){
                    area=heights[i]*(j-i);
                }
                else{
                    area=heights[j]*(j-i);
                }
                maxar=max(maxar,area);
            }
            maxareas.push_back(maxar);
        }
        int ans=*max_element(maxareas.begin(),maxareas.end());
        return ans;
    }
};
