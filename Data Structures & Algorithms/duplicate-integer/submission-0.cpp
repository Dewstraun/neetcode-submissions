class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         map<int,int> mpp;
        for(auto it=nums.begin(); it!=nums.end();it++){
           mpp[*it]++;
        }
        for(auto it=mpp.begin(); it!=mpp.end();it++)
        {
            if(it->second>1)
            return true;
        }
        return false;
    }
};