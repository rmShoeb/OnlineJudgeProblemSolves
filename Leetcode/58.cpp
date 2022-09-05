class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<int> lengths;
        int count{0};
        
        for(auto c: s){
            if(c==' '){
                if(count!=0) lengths.push_back(count);
                count = 0;
            }
            else
                count++;
        }
        if(count!=0) lengths.push_back(count);
        
        return lengths.back();
    }
};
