/*
	User: Prithvi
	Application: Word Break
	Language: Java
	Date: 14 - 11 - 22

*/



import java.util.*;


class WordBreak{
	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);

		String good = "neetcode";

		//Set<String> cars = new HashSet<>(cars);
		HashSet<String> cars = new HashSet<String>();

		cars.add("leet");
		cars.add("neet");
		cars.add("code");

		boolean[] dp = new boolean[1 + good.length()];

		for(int i = 0; i <= good.length(); i++){

			dp[i] = false;
		}


		dp[good.length()] = true;


		for(int i = good.length() - 1; i >= 0; i --){
			for(String Word : cars){

				if(i + Word.length() <= good.length() && (good.substring(i, good.length()-1).startsWith(Word))){
					dp[i] = dp[i + good.length()];
				}

				if(dp[i]){
					break;
				}
			}
		}


		System.out.println(dp[0]);



	}

}



















