class Solution {
public:
    int climbStairs(int n) {
        //since constraints r very low ,we can try O(N) approach  
        int prev2 = 1;
        int prev1 = 1;  
        int curr;
        //we have taken 2 pointers bec there are 2 ways to reach at the top
        for(int i = 2;i<=n;i++){ 
            //iterate through loop 
            //curr step addition of both
           curr = prev1 + prev2; 
           //make sure to give prev2 value to prev1
           //make sure to give curr val to prev2
            prev1 = prev2;
            prev2 = curr;
        } 
        return prev2;
    }
};
