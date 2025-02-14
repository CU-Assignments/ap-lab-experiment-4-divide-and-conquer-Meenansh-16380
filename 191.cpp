class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        for (int i = 0; i < 32; i++) {
            if ((n >> i) & 1) {
                res += 1;
            }
        }
        return res;        
    }
};

//Accepted
//Runtime: 0 ms
//Case 1
//Case 2
//Case 3
//Input
//n =
//11
//Output
//3
//Expected
//3
