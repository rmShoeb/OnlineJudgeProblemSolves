class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra_candies) {
        bool temp{false};
        int size{static_cast<int>(candies.size())};
        vector<bool> will_have_max;

        for(int i=0; i<size; i++){
            temp = true;
            for(int j=0; j<size; j++){
                if(candies[i]+extra_candies < candies[j]){
                    temp = false;
                    break;
                }
            }
            will_have_max.push_back(temp);
        }
        
        return will_have_max;
    }
};