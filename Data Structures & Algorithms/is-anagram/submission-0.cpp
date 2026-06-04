class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>mpp_s;
        map<int,int>mpp_t;
        for(auto it=s.begin();it!=s.end();it++){
            mpp_s[*it]++;
        }
        for(auto it=t.begin();it!=t.end();it++){
            mpp_t[*it]++;
        }
        return(mpp_s==mpp_t)? true: false;
    }
};
