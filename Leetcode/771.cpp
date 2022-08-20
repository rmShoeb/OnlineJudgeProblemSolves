class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int num_jewels_in_stones{0};
        
        for(auto stone: stones){
            for(auto jewel: jewels){
                if(stone==jewel){
                    num_jewels_in_stones++;
                    break;
                }
            }
        }
        
        return num_jewels_in_stones;
    }
};