class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()>=2 && nums.size()<=1000){
            unordered_map<int,int>mpp;
            for(int i=0;i<nums.size();i++){
                int a=nums[i];
                int b=target-a;
                if(mpp.find(b)!=mpp.end()){
                    int j = mpp[b];
                    return (i<j) ? vector<int>{i, j} : vector<int>{j, i};
                }
                mpp[a]=i;
            }
        }
        return {};
    }
};
