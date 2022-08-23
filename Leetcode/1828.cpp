// this solution is very slow, and takes quite a lot memory
// AC though
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> inside(static_cast<int>(queries.size()));
        int i{0};

        for(auto circle: queries){
            for(auto point: points){
                if(inside_or_not(point, circle))
                    inside[i]++;
            }
            i++;
        }

        return inside;
    }
    
    bool inside_or_not(vector<int>& point, vector<int>& circle){
        int x_squared{circle[0]-point[0]};
        x_squared *= x_squared;
        int y_squared{circle[1]-point[1]};
        y_squared *= y_squared;
        
        if((x_squared+y_squared) > (circle[2]*circle[2])) return false;
        return true;
    }
};