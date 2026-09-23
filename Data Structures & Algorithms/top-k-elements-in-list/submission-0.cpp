class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> hash;
        for(auto it: nums){
            hash[it]++;
        }
        vector<pair<int, int>> arr;
        for(auto it: hash){
            arr.push_back({it.second, it.first});
        }
        sort(arr.rbegin(), arr.rend());
        for(int i=0; i<k; i++){
            result.push_back(arr[i].second);
        }
        return result;
    }
};
