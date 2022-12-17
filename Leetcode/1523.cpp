class Solution {
public:
    int countOdds(int low, int high) {
        int odd_count{0};
        
        if(low%2 != 0){
            odd_count++;
            low++;
        }
        if(high%2 != 0){
            odd_count++;
            high--;
        }
        odd_count += ((high-low)/2);
        
        return odd_count;
    }
};