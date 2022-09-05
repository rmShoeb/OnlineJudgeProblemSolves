class Solution {
public:
    double average(vector<int>& salary) {
        int min_salary{INT_MAX};
        int max_salary{INT_MIN};
        int sum{0};
        
        for(auto s: salary){
            if(s>max_salary) max_salary = s;
            if(s<min_salary) min_salary = s;
            sum += s;
        }
        
        return static_cast<double>(sum-min_salary-max_salary)/(salary.size()-2);
    }
};