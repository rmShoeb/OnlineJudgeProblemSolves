class Solution {
public:
    string removeStars(string s) {
        string stack;
        
        for(auto c: s){
            if(c=='*') stack.pop_back();
            else stack.push_back(c);
        }
        
        return stack;
    }
};