




import java.util.*;

public class Methods{
	public static void main(String[] args) {
		sum(6, 1);
	}
	public static int sum(int a, int b){
		
		int subans = sum(a - 1, b);
		System.out.println(subans);
		System.out.println(a * b);
		return 0;
	}

}



