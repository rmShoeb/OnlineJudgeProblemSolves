class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x{0};
        
        for(auto operation: operations){
            if(operation[0]=='+' or operation[2]=='+') x++;
            else if(operation[0]=='-' or operation[2]=='-') x--;
        }
        
        return x;
    }
};