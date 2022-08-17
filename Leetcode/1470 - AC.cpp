class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffled(2*n);
        for(int i=0; i<n; i++){
            shuffled[2*i] = nums[i];
            shuffled[2*i + 1] = nums[n+i];
        }
        return shuffled;
    }
};