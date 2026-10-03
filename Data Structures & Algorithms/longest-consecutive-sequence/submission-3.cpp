class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int result=1;
        unordered_set<int> hash(nums.begin(), nums.end());
        for(auto num: hash){
            if(hash.find(num-1)==hash.end()){
                int count=1;
            int curr= num;
            while(hash.find(curr+1)!=hash.end()){
                count++;
                curr++;
            }
            result= max(count, result);
            }
        }
        return result;
    }
};
