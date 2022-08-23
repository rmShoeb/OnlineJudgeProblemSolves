class Solution {
public:
    int numberOfSteps(int num) {
        int num_steps{0};
        
        while(num){
            if(num%2==0) num /= 2;
            else num--;
            num_steps++;
        }
        
        return num_steps;
    }
};