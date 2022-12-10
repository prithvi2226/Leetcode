
/*
	User: Prithvi
	Application: Combination Sum 4
	Language: C++
	Date: 09 - 12 - 22

*/
/*
#include<iostream>
#include<cstdlib>
#include<vector>

int combination(vecor<int> &num, int goal);
using namespace std;


int combination(vector<int> &num, int goal){
   
	//Base case

	if(goal == 0){
		return 1;
	}
	if(goal < 0){
		return 0;
	}

	int sum = 0;

	for(int i = 0; i < num.size(); i ++){

		sum = sum + combination(num, goal - num[i]);
	
	}
	cout << sum << endl;
	return sum;

}



int main(int argc, char const *argv[])
{
	vector<int> num{1, 2};

	int target = 3;


	return combination(num, target);

	//return 0;
}

*/
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {

        vector<int>& dp(target+1, -1); 
        return solveMem(nums, target, dp);
    }

private:
    int solveMem(vector<int>& num, int tar, vector<int>& dp){
        if(tar == 0){
		    return 1;
	    }
	    if(tar < 0){
		    return 0;
	    }
        if(dp[target] != -1){
            return dp[target];
        }

	    int sum = 0;

	    for(int i = 0; i < num.size(); i ++){

		    sum = sum + solveMem(num, tar - num[i], dp);
	
	    }
	//cout << sum << endl;
        dp[target] = sum;
	    return dp[target];
    }

};
















