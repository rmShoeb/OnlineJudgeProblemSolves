class Solution {
public:
    int numberOfMatches(int n) {
        int number_of_matches{0};
        
        while(n!=1){
            number_of_matches += (n/2);
            if(n%2 != 0) n++;
            n /= 2;
        }
        
        return number_of_matches;
    }
};