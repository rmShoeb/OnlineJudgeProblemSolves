class Solution {
public:
    bool isValid(string s) {
        string stack{""};
        
        for(auto c: s){
            switch(c){
                case '(':
                case '{':
                case '[':
                    stack.push_back(c);
                    break;
                case ')':
                    if(stack.back()!='(') return false;
                    stack.pop_back();
                    break;
                case '}':
                    if(stack.back()!='{') return false;
                    stack.pop_back();
                    break;
                case ']':
                    if(stack.back()!='[') return false;
                    stack.pop_back();
                    break;
            }
        }
        if(stack.size() != 0)
            return false;
        return true;
    }
};