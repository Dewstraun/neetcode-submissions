class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>ans;
        for(int k=0;k<nums.size();k++){
            int i=k+1;
            int j=nums.size()-1;

            while(i<j){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int>triplet{nums[i],nums[j],nums[k]};
                    sort(triplet.begin(),triplet.end());
                    s.insert(triplet);
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
        for(auto n:s){
            ans.push_back(n);
        }
        return ans;
    }
};
