/**
 * @author : 91996
 * @created : 2022-10-03
**/


import java.util.*;



class ProductArray{
  public static void main(String[] Args){



    Scanner input = new Scanner(System.in);

    int n = input.nextInt();

    int[] arr = new int[n];

    for(int i = 0; i < n; i++){
      
      arr[i] = input.nextInt();

    }

    //array: [1, 2, 3, 4, 5]
    //prefix : 1
    //postfix : 1
    //result : [prefix, array[i]*prefix,...]
    //prefix = array[i]*prefix
    //
    //
    int prefix = 1;
    int postfix = 1;

    int[] result = new int[n];

    for(int i = 0; i < n; i++){

      result[i] = prefix;
      prefix = prefix * arr[i];

      System.out.println(result[i]);
      
    }

    for(int i = (n - 1); i >= 0; i --){
      
      result[i] = postfix * result[i];
      postfix = arr[i] * postfix; 
    }


    for(int i = 0; i < n; i++){
      System.out.println(result[i]);
    }


















  }
}








