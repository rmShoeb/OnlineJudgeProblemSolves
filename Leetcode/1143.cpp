class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        unsigned short length1{static_cast<unsigned short>(text1.length())};
        unsigned short length2{static_cast<unsigned short>(text2.length())};
        unsigned short dp_table[1001][1001]{0};
        
        unsigned short iter1{1};
        unsigned short iter2{1};
        
        while(iter1 < length1+1){
            iter2=1;
            while(iter2 < length2+1){
                if(text1[iter1-1] == text2[iter2-1])
                    dp_table[iter1][iter2] = dp_table[iter1-1][iter2-1]+1;
                else
                    dp_table[iter1][iter2] = max(dp_table[iter1-1][iter2], dp_table[iter1][iter2-1]);
                iter2++;
            }
            iter1++;
        }

        return dp_table[length1][length2];
    }
    
    unsigned short max(unsigned short& a, unsigned short& b){
        if(a>b) return a;
        return b;
    }
};