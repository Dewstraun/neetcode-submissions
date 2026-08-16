class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        int r=0, l=0;
        int window=s1.length();
        for(char c:s1){
           freq1[c-'a']++;
        }
        while(r<s2.length()){
            freq2[s2[r]-'a']++;
            while(r-l+1>window){
                freq2[s2[l]-'a']--;
                l++;
            }
            if(r-l+1==window){
                if(equal(freq1.begin(),freq1.end(),freq2.begin())){
                    return true;
                }
            }
            r++;
        }
        return false;
    }
};
