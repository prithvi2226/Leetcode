/**
 * @author : 91996
 * @created : 2022-10-12
**/



import java.util.*;


class MaxProductSubarray{
  
  public static void main(String[] args){

    Scanner input = new Scanner(System.in);


    int n = input.nextInt();


    int[] arr_p = new int[n];


    for(int i = 0; i < n; i ++){
  
      arr_p[i] = input.nextInt();

    }


   int result = Arrays.stream(arr_p).max().getAsInt();

   int Current_max = 1;
   int Current_min = 1;
   

   for(int i = 0; i < n; i ++){

    int num = arr_p[i] ;

    int temp = Current_max * num;
    
    Current_max = Math.max((Current_max * num), (Current_min * num));
    Current_max = Math.max(Current_max, num);
    Current_min = Math.min(temp, (Current_min * num));
    Current_min = Math.min(Current_min, num);

    result = Math.max(result, Current_max);
    result = Math.max(result, num);


   }

   System.out.println(result);


  }


}







