class Solution {
public:
    string defangIPaddr(string address) {
        string defanged{""};
        for(auto c: address){
            if(c==46){
                // ASCII for . is 46
                defanged.push_back(91);
                defanged.push_back(c);
                defanged.push_back(93);
            }
            else defanged.push_back(c);
        }
        
        return defanged;
    }
};