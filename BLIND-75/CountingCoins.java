
/*
	User: Prithvi
	Application: Counting Numbers
	Language: Java
	Date: 9 - 11 - 22

*/


import java.util.*;


class CountingCoins{
	public static void main(String[] args) {
		

		Scanner input = new Scanner(System.in);

		int amount = input.nextInt();

		int n = input.nextInt();

		int[] arr = new int[n];

		for (int i = 0; i < n; i++) {

			arr[i] = input.nextInt();
			
		}


		int[] dp = new int[amount + 1];

		dp[0] = 0;

		//coin value and amount 

		for(int am = 1; am < amount+1; am++){
			for(int coin = 0; coin < arr.length; coin++){

				if(am - coin >= 0){


					dp[am] = Math.min(dp[am], 1 + dp[am - coin]);

				}


			}
		}

		System.out.println(dp[amount]);



	}
}





















