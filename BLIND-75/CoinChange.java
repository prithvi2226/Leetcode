
/*
	User: Prithvi
	Application: Coin Change
	Language: Java
	Date: 10 - 11 - 22

*/


import java.util.*;


public class CoinChange{
	public static void main(String[] args) {
		
		int amount = 2;
		int coins[] = {3};

		int dp[] = new int[amount + 1];

		Arrays.fill(dp, amount + 1);

		dp[0] = 0;

		for(int i = 1; i <= amount; i++){
			for(int coin : coins){
				if(i - coin >= 0){
					dp[i] = Math.min(1 + dp[i - coin], dp[i]);
				}
			}
		}
		if(dp[amount] != amount + 1){
			System.out.println(dp[amount]);
		}
		else{
			System.out.println(-1);
		}

	}

}










