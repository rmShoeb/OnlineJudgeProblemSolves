class Solution {
public:
    int hammingWeight(uint32_t n) {
        unsigned short weight{0};
        
        while(n>0){
            if(n%2 != 0) weight++;
            n /= 2;
        }
        
        return weight;
    }
};