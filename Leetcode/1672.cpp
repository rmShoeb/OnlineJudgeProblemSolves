class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth{0};
        int rich_guy_wealth{0};

        for(auto rich_guy: accounts){
            rich_guy_wealth = 0;
            for(int balance: rich_guy){
                rich_guy_wealth += balance;
            }
            if(rich_guy_wealth > max_wealth) max_wealth = rich_guy_wealth;
        }
        
        return max_wealth;
    }
};