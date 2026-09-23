class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<vector<int>, vector<string>> hash;
        for(auto s: strs){
            vector<int> count(26, 0);
            for(auto ch: s){
                count[ch- 'a']++;
            }
            hash[count].push_back(s);
        }
        for(auto it: hash){
            result.push_back(it.second);
        }
        return result;
    }
};
