class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> sum;
        int iter{static_cast<int>(num.size())-1};
        int carry{0};
        int temp{0};
        
        while(iter>=0){
            temp = num[iter]+(k%10)+carry;
            sum.push_back(temp%10);
            carry = temp/10;
            k /= 10;
            iter--;
        }
        while(k>0){
            temp = (k%10)+carry;
            sum.push_back(temp%10);
            carry = temp/10;
            k /= 10;
        }
        if(carry==1) sum.push_back(carry);
        reverse(sum.begin(), sum.end());
        
        return sum;
    }
};