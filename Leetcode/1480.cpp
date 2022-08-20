class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        unsigned i{0};
        unsigned n{static_cast<unsigned>(nums.size())};

        int sum{0};
        vector<int> ans(n);
        
        for(i=0; i<n; i++) ans[i] = sum += nums[i];
        
        return ans;
    }
};