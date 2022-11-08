

/*
	User: Prihvi
	Application: Climbing stairs
	Language: Java
	Date: 08 - 11 - 2022

*/

/*
	Climbing Stairs
	Basically Fibonacci Series


*/


import java.util.*;


class ClimbingStairs{
	public static void main(String[] args){

		Scanner input = new Scanner(System.in)	;

		int n = input.nextInt();

		int last = 1;
		int second_last = 1;

		int temp = 0;

		for(int i = 0; i < n - 1; i++){

			temp = last;
			last = last + second_last;
			second_last = temp;
		}

		System.out.println(last);


	}
}







