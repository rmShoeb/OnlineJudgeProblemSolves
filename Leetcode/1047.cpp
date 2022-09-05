class Solution {
public:
    string removeDuplicates(string s) {
        string stack;
        
        for(auto c: s){
            if(stack.back() == c)
                stack.pop_back();
            else
                stack.push_back(c);
        }
        return stack;
    }
};