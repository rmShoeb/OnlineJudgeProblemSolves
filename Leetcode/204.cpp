class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;

        vector<bool> is_prime(n-2, true);
        int prime_count{0};
        
        for(int i=0; i<n-2; i++){
            if(is_prime[i]){
                prime_count++;
                for(int j=2; ((i+2)*j)-2<n-2; j++)
                    is_prime[((i+2)*j)-2] = false;
            }
        }
        return prime_count;
    }
};