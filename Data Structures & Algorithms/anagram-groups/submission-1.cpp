class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(auto &s:strs){
            vector<int>charcount(26,0);
            for(char c:s){
                charcount[c - 'a']++;
            }
            string key=to_string(charcount[0]);
            for(int i=1;i<26;++i){
                key=key+","+to_string(charcount[i]);
            }
            mpp[key].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto &[key,grp]:mpp){
            ans.push_back(grp);
        }
        return ans;
    }
};
