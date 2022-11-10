
/*
	User: Prithvi
	Application: Coin Change
	Language: Java
	Date: 10 - 11 - 22

*/

import java.util.*;


class CoinChange{
	public static void main(String[] args) {

		int n = 18;
		int a[] = {7, 5, 1};

		int ans = minCoins(n, a);
		System.out.println(ans);
		
	}

static int minCoins(int n, int a[]){

	if(n == 0){
		return 0;
	}

	int Ans = Integer.MAX_VALUE;

	for(int i = 0; i < a.length; i ++){
		
		if(n - a[i] >= 0){
			int subAns = minCoins(n - a[i], a);	

			System.out.println("Subans is " +subAns+ " array value at index " +i+ " is " +(a[i])+ " with value to be made " +(n - a[i]));
			if(subAns + 1 < Ans){
				Ans = subAns + 1;
			}
			System.out.println("Ans is " +Ans);
		}	


		}

		return Ans;

	}
}











