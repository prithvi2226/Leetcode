/**
 * @author : 91996
 * @created : 2022-10-04
**/



import java.util.*;



class MaxSubarray{

  public static void main(String[] args){

    Scanner input = new Scanner(System.in);

    int n = input.nextInt();

    int[] array = new int[n];


    for(int i = 0; i < n; i++){
      
      array[i] = input.nextInt();


    }

    //[5,4,-1,7,8]
    //cur = 0
    //max =0
    //for(i to n-1)
    //  cur = cur + a[i]
    //  if(cur > max)
    //  max = cur
    //  if(cur < 0)
    //  cur = 0
    //  return max
    //
    int Current_sum = array[0];
    int Max_sum = array[0];


      //kadane's algo COCKSUCKA
      //[2, -1, 2, 3, 5, -6, 7]

      for(int i = 1; i < n; i++){

        int nums = array[i];

        Current_sum = Math.max(nums, (array[i] + array[i - 1]));
        Max_sum = Math.max(Current_sum, Max_sum);

      }

    System.out.println(Max_sum);



  }


}






