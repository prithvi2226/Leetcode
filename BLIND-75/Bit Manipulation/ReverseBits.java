

/*

	*User: Prithvi
	*File: Reverse Bits
	*Date: 5/11/2022
*/


import java.util.*;


class ReverseBits{
	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);

		int n = input.nextInt();
		int result = 0;

		for(int i = 0; i < 32; i ++){

			int bit = (n >> 1) & i;

			result = result | (bit << (31 - i));


		}

		System.out.println(result);
		
	}
}






