class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result=0;
        unordered_map<int, int> hash;
        for(auto num: nums){
            if(hash[num]==0){
                hash[num]= hash[num-1]+hash[num+1]+1;
                hash[num-hash[num-1]]= hash[num];
                hash[num+hash[num+1]]= hash[num];
                result= max(result, hash[num]);
            }
        }
        return result;
    }
};
