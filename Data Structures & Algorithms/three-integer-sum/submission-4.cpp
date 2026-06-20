class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int k=0;k<nums.size();k++){
            int i=k+1;
            int j=nums.size()-1;
            if(k > 0 && nums[k] == nums[k-1]){
                continue;
            }
            while(i<j){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int>triplet{nums[i],nums[j],nums[k]};
                    ans.push_back(triplet);
                    while(i < j && nums[i] == nums[i+1]) i++;
                    while(i < j && nums[j] == nums[j-1]) j--;
                    i++;
                    j--;
                }
                else if(nums[i]+nums[j]+nums[k]>0){
                    j--;
                }
                else{
                    i++;
                }
            }
        }
        return ans;
    }
};
