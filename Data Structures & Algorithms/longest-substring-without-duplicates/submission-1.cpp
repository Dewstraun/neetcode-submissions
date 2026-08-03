class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>hashset;
        int right=0, left=0, maxlen=0;
        while(right<s.length()){
            while(hashset.find(s[right])!=hashset.end()){
                hashset.erase(s[left]);
                left++;
            }
            hashset.insert(s[right]);
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};
