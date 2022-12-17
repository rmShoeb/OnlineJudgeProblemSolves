using System.Collections.Generic;

public class Solution {
    public int NumJewelsInStones(string jewels, string stones) {
        var map = new Dictionary<char, int>();
        int numJewels = 0;
        foreach(var stone in stones){
            if(map.ContainsKey(stone))
                map[stone]++;
            else
                map.Add(stone, 1);
        }
        foreach(var stone in jewels){
            if(map.ContainsKey(stone))
                numJewels += map[stone];
        }
        return numJewels;
    }
}