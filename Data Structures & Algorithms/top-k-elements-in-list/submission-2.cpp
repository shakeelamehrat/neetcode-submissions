class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> hash;
        for(auto it: nums){
            hash[it]++;
        }
        vector<vector<int>> freq(nums.size()+1);
        for(auto it: hash){
            freq[it.second].push_back(it.first);
        }
        for(int i=freq.size()-1; i>0; i--){
            for(auto it: freq[i]){
                result.push_back(it);
            }
            if(result.size()==k) return result;
        }
        return result;
    }
};
