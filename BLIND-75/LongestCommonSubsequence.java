/*
	User: Prithvi
	Application: Longest common Subsequence
	Language: Java
	Date: 16 - 11 - 22

*/


import java.util.*;


class LongestCommonSubsequence{
	public static void main(String[] args) {
		

		Scanner input = new Scanner(System.in);

		String text1 = input.nextLine();
		String text2 = input.nextLine();


		int[][] dp = new int[text1.length() + 1][text2.length() + 1];


		for(int i = 0; i < text1.length() + 1; i++){
			dp[i][0] = 0;
		}

		for(int j = 0; j < text2.length() + 1; j++){
			dp[0][j] = 0;
		}

		for(int i = 0; i < text1.length(); i ++){
			for(int j = 0; j < text2.length(); j++){

				if(text1.charAt(i) == text2.charAt(j)){
					dp[i][j] = 1 + dp[i + 1][j + 1];
				}
				else{
					dp[i][j] = Math.max(dp[i + 1][j], dp[i][j + 1]);
				}

			}
		}

		System.out.println(dp[text1.length()][text2.length()]);




	}
}





