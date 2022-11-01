/**
 * @author : 91996
 * @created : 2022-10-26
**/


import java.util.*;


class Twosumtwo{
  public static void main(String[] Args){
    
    Scanner input = new Scanner(System.in);

    int n = input.nextInt();

    int[] nums = new int[n];

    for(int i = 0; i < n; i ++){

      nums[i] = input.nextInt();

    }

    System.out.println("Enter target value");

    int target = input.nextInt();

    int left = 0;
    int right = nums.length - 1;


    while(left < right){

      int sum = 0;
      sum = nums[left] + nums[right];

      if (sum > target) {
        right = right - 1;
      }

      else if(sum < target){
        left = left + 1;
      } 

      else {
        System.out.printf("%d %d", left + 1, right + 1);
        break;
      }



    }






  }
}






