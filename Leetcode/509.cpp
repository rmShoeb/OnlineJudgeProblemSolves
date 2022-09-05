class Solution {
public:
    int fib(int n){
        int a{0};
        int b{1};

        if(n==0) return a;
        else if(n==1) return b;

        int f{1};
        int i{2};
        
        while(i<=n){
            f = a+b;
            a = b;
            b = f;
            i++;
        }
        
        return f;
    }
};