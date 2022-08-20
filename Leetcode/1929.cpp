class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        unsigned i{0};
        unsigned n{static_cast<unsigned>(nums.size())};
        vector<int>ans(2*n);
        
        for(i=0; i<n; i++)
            ans[i] = ans[i+n] = nums[i];
        
        return ans;
    }
};