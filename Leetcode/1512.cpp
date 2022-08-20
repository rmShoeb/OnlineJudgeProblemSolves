class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int size{static_cast<int>(nums.size())};
        int pairs{0};
        
        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                if(nums[i] == nums[j]) pairs++;
            }
        }
        
        return pairs;
    }
};