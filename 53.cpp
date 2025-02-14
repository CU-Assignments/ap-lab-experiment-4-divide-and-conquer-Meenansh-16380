class Solution {
public:
    int maxSubArray(vector<int>& nums) {    
        return solve(nums, 0, false);
    }
    int solve(vector<int>& A, int i, bool mustPick) {
        if(i >= size(A)) return mustPick ? 0 : -1e5;       
        if(mustPick)
            return max(0, A[i] + solve(A, i+1, true));            
        return max(solve(A, i+1, false), A[i] + solve(A, i+1, true));
    }
};


//Accepted
//Runtime: 0 ms
//Case 1
//Case 2
//Case 3
//Input
//nums =
//[-2,1,-3,4,-1,2,1,-5,4]
//Output
//6
//Expected
//6
