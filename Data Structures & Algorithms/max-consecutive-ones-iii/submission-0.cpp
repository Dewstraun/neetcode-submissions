class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0, right=0, maxlen=0;
        int hasharr[2]={0};
        while(right<nums.size()){
            hasharr[nums[right]]++;
            while(hasharr[0]>k){
                hasharr[nums[left]]--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};