class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1, zeroCount=0;
        vector<int>ans;
        
        for(auto it=nums.begin();it!=nums.end();it++){
            if(*it != 0) prod*=(*it);
            else zeroCount++;
        }
        for(auto it=nums.begin();it!=nums.end();it++){
            if(zeroCount > 1) ans.push_back(0);
            else if(zeroCount == 1) {
                if(*it == 0) ans.push_back(prod);
                else ans.push_back(0);
            }
            else{
                int k=prod/(*it);
                ans.push_back(k);
            }
        }
        return ans;
    }
};
