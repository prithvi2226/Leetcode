/**
 * @author : 91996
 * @created : 2022-11-02
**/


import java.util.*;

class No1bits{
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int n = input.nextInt();

    int count = 0;

    while(n != 0){
      n = n & (n - 1);
      count ++;
    }

    System.out.println(count);

  }



}





