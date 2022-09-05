class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> stone_map;
        int num_jewels_in_stones{0};
        
        for(auto stone: stones)
            stone_map[stone]++;
        for(auto jewel: jewels)
            num_jewels_in_stones += stone_map[jewel];
        
        return num_jewels_in_stones;
    }
};