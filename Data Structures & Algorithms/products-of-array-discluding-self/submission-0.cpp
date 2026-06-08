class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prod;
        if(nums.size()>=2 && nums.size()<=1000){
             for(int i=0; i<nums.size();i++){
            int product=1;
            for(int j=0; j<nums.size();j++){
                if(i==j){
                     continue;
                }
               product*=nums[j];
            }
            prod.push_back(product);
        }
        }
        return prod;
    }
};
