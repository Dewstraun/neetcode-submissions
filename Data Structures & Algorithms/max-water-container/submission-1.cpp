class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int maxar=0;

        while(i<j){
            int area=(j-i)*min(heights[i],heights[j]);
            maxar=max(maxar,area);
            (heights[i]<heights[j])?i++:j--;
        }
        return maxar;
    }
};
