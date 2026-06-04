class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;

        unordered_map<char,int>mpp_s;
        unordered_map<char,int>mpp_t;
        
        for(int i=0;i<=s.length();i++){
            mpp_s[s[i]]++;
            mpp_t[t[i]]++;
        }
        return(mpp_s==mpp_t)? true: false;
    }
};
