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
    int Current_sum = 0;
    int Max_sum = 0;

    for(int i = 0; i < n; i++){

      //kadane's algo COCKSUCKA

      Current_sum = Current_sum + array[i];

      if(Current_sum > Max_sum){
        Max_sum = Current_sum;
      }

      if(Current_sum < 0){
        Current_sum = 0;
      }



    }


    System.out.println(Max_sum);



  }


}






