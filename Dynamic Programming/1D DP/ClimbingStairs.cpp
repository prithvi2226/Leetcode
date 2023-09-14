class Solution {
public:
    int solve(int n){

        if(n <= 2){
            return n;
        }
    
        int prev2 = 1;
        int prev =  2;
        int counter = 3;

        int current;
        
        while(true){
            if(counter == n){
                return (prev + prev2);
            }
            current = prev + prev2;
            prev2 = prev;
            prev = current;

            counter ++;
        }
    }

    int climbStairs(int n) {
        return solve(n);
    }
};