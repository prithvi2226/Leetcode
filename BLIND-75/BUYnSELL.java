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
    
    int largestdiff = 0;

    int currentdiff;
    
    for(int i = 0; i < n; i++){
      for(int j = i + 1; j < n; j++){

        currentdiff = array[j] - array[i];

        if(currentdiff > largestdiff){
          largestdiff = currentdiff;
        }

      }
    }

    System.out.println(largestdiff);

//    for(int i = 0; i < n; i++){
  //    System.out.println(array[i]);
   // }


  }


}





