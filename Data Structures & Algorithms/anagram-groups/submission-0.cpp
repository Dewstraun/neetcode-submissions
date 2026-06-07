class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(const string &it: strs){
            string key=it;
            sort(key.begin(),key.end());
            mpp[key].push_back(it);
        }
        vector<vector<string>>ans;
        for(const auto &[key,grp]:mpp){
            ans.push_back(grp);
        }
        return ans;
    }
};
