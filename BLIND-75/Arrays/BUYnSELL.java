/**
 * @author : 91996
 * @created : 2022-09-28
**/


import java.util.*;


class BUYnSELL{
  public static void main(String[] args){

    Scanner input = new Scanner(System.in);

    int n = input.nextInt();


    int[] array = new int[n];


    System.out.println("Enter prices for the stock");

    for(int i = 0; i < n; i++){
      
      array[i] = input.nextInt();


    }
    
    int min_so_far = array[0];

    int max = 0;

    for(int i = 0; i < n; i++){

      min_so_far = Math.min(min_so_far, array[i]);
      int profit = array[i] - min_so_far;
      max = Math.max(profit, max);
      
    }

  





   
    System.out.println(max);

//    for(int i = 0; i < n; i++){
  //    System.out.println(array[i]);
   // }


  }


}

//[1, 2, 4, 4, 5, 7]
//min_so_far = 0
//max = 1
//min = math.min(min, a[i])
//max = max - min
//max = math.max(max, 
//





