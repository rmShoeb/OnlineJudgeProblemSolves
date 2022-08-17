#include <algorithm>

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words{0};
        int words{0};
        
        for(auto sentence: sentences){
            words = count(sentence.begin(), sentence.end(), 32);
            if(words > max_words) max_words = words;
        }
        
        return ++max_words;
    }
};