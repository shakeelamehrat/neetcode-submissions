class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> hash;
        for(auto s: strs){
            vector<int> count(26, 0);
            for(auto ch: s){
                count[ch- 'a']++;
            }
            string key= to_string(count[0]);
            for(int i=1; i<26; i++){
                key+= ','+ to_string(count[i]);
            }
            hash[key].push_back(s);
        }
        for(auto it: hash){
            result.push_back(it.second);
        }
        return result;
    }
};
