class Solution {
public:
    int xorOperation(int n, int start) {
        int bitwise_xor{start};

        for(int i=1; i<n; i++)
            bitwise_xor ^= (start + 2*i);

        return bitwise_xor;
    }
};