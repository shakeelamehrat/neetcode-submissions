class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> hash;
        for(auto it: nums){
            hash[it]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_pq;
        for(auto it: hash){
            min_pq.push({it.second, it.first});
            if(min_pq.size()>k) min_pq.pop();
        }
        for(int i=0; i<k; i++){
            result.push_back(min_pq.top().second);
            min_pq.pop();
        }
        return result;
    }
};
