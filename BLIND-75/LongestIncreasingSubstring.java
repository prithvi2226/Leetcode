/*
	User: Prithvi
	Application: Longest Sequence String
	Language: Java
	Date: 14 - 11 - 22

*/


import java.util.*;


class LongestIncreasingSubstring{

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);

		int length = input.nextInt();

		int[] nums = new int[length];


		for(int i = 0; i < length; i ++){
			nums[i] = input.nextInt();
		}

		int Max_so_far = 1;


		int[] dp = new int[nums.length + 1];

		Arrays.fill(dp, 1);

		for(int i = nums.length - 1; i >= 0; i --){
			for(int j = i + 1; j < nums.length; j ++){
				if(nums[i] < nums[j]){

					dp[i] = Math.max(dp[i], 1 + dp[j]);

				}
				//Max_so_far = Math.max(dp[i], Max_so_far);
			}
			Max_so_far = Math.max(dp[i], Max_so_far);
		}


		System.out.println(Max_so_far);

		


	}
}




















