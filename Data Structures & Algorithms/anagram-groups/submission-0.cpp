class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> hash;
        string sorted;
        for(int i=0; i<strs.size(); i++){
            sorted= strs[i];
            sort(sorted.begin(), sorted.end());
            hash[sorted].push_back(strs[i]);
        }
        for(auto it: hash){
            result.push_back(it.second);
        }
        return result;
    }
};
