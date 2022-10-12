/**
 * @author : 91996
 * @created : 2022-10-12
**/


import java.util.*;


class MaxProductSubarray{
  
  public static void main(String[] args){

  Scanner input = new Scanner(System.in);

  int n = input.nextInt();

  int[] arr = new int[n];


  for(int i = 0; i < n; i++){
    arr[i] = input.nextInt();
  }

  
  int product = arr[0];
  int max = arr[0];
  int min = arr[0];


  for(int i = 1; i < n; i ++){

    int temp_max = Math.max(arr[i]*max, Math.max(arr[i] * min, arr[i]));
    min =  Math.min(arr[i]*max, Math.min(arr[i] * min, arr[i]));

    
    max = temp_max;

    product = Math.max(product, max);


  }

  System.out.println(product);

  }



}






