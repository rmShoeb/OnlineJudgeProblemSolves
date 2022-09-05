class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]{0};
        
        for(auto c: s) arr[c-97]++;
        for(auto c: t) arr[c-97]--;
        for(auto num: arr){
            if(num != 0) return false;
        }
        return true;
    }
};