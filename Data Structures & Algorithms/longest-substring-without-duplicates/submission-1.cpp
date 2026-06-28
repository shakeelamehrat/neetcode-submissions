class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r= 0, maxLen= 0;
        vector<int> hash(256, -1);
        while(r<s.size()){
            if(hash[s[r]]!=-1){
                l= max(l, hash[s[r]]+1);
            }
            hash[s[r]]=r;
            int len= r-l+1;
            maxLen= max(maxLen, len);
            r++;
        }
        return maxLen;
    }
};
