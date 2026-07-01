class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen=0, maxf=0, l=0, r=0;
        vector<int> hash(26, 0);
        while(r<s.size()){
            hash[s[r]-'A']++;
            maxf= *max_element(hash.begin(), hash.end());
            int changes= r-l+1-maxf;
            if(changes<=k){
                maxlen= max(maxlen, r-l+1);
                r++;
            }
            else{
                hash[s[l]-'A']--;
                l++;
                r++;

            }
        }
        return maxlen;
    }
};