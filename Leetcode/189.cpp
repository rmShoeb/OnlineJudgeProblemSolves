class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length{static_cast<int>(nums.size())};
        vector<int> rotated(length);
        k %= length;
        
        for(int i=0; i<length; i++){
            rotated[(i+k)%length] = nums[i];
        }
        
        nums = rotated;
    }
};