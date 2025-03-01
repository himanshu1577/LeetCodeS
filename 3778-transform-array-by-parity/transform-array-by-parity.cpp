class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int p = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]%2 == 0){
                ans[p] = 0;
                p++;
            }
        }
        return ans;
    }
};