class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size(static_cast<int>(nums.size()));
        vector<int> smaller_count(size);
        
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                if(nums[j] < nums[i]) smaller_count[i]++;
            }
        }
        
        return smaller_count;
    }
};