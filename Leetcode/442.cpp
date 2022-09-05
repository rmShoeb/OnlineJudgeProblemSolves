class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int length{static_cast<int>(nums.size())};
        vector<int> counts(length, 0);
        vector<int> duplicates;
        
        for(auto num: nums)
            counts[num-1]++;
        for(int i{0}; i<length; i++)
            if(counts[i]>1)
                duplicates.push_back(i+1);
        return duplicates;
    }
};