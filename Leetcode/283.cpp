class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int num_zeros{0};
        int i{0};
        int j{0};
        
        while(i<nums.size()){
            if(nums[i]!=0){
                nums[j] = nums[i];
                j++;
            }
            else num_zeros++;
            i++;
        }
        while(num_zeros>0){
            nums[j] = 0;
            j++;
            num_zeros--;
        }
    }
};