class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> answer(2);
        
        for(int i=1; i<=n/2; i++){
            if(!has_zero_in_decimal(i) and !has_zero_in_decimal(n-i)){
                answer[0] = i;
                answer[1] = n-i;
                break;
            }
        }
        return answer;
    }
    
    bool has_zero_in_decimal(int x){
        int temp{0};
        while(x){
            temp = x%10;
            x /= 10;
            if(temp==0) return true;
        }
        return false;
    }
};