class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> hash;
        for(auto num: nums){
            hash[num]++;
        }
        vector<vector<int>> result;
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            hash[nums[i]]--;
            for(int j=i+1; j<nums.size(); j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                hash[nums[j]]--;
                int k= -(nums[i]+nums[j]);
                if(hash[k]>0 && k>=nums[j]) result.push_back({nums[i], nums[j], k});
                hash[nums[j]]++;
            }
            hash[nums[i]]++;
        }
        return result;
    }
};
