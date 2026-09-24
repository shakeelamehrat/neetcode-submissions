class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int zero=0;
        int n= nums.size();
        vector<int> result(n, 0);
        for(int i=0; i<n; i++){
            if(nums[i]!=0) p*=nums[i];
            if(nums[i]==0){
                zero++;
            }
        }
        if(zero>1){
            return result;
        }
            for(int i=0; i<n; i++){
                if(nums[i]==0){
                    result[i]= p;
                    return result;
                }
                if(zero==0) result[i]= p/nums[i];
            }
            return result;
    }
};
