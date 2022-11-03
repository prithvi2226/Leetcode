/**
 * @author : 91996
 * @created : 2022-11-03
**/


import java.util.*;



class MissingNumber{
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);

    int n = input.nextInt();

    int[] nums = new int[n];

    for(int i = 0; i < n; i++){
      nums[i] = input.nextInt();
    }

    


    int result = nums.length;

    for(int i = 0; i < nums.length; i++){
      result = result + i - nums[i];

    }

    System.out.println(result);



  }
}
