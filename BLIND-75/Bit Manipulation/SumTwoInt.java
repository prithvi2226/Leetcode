/**
 * @author : 91996
 * @created : 2022-11-02
**/


import java.util.*;


class SumTwoInt{
  public static void main(String[] args){
    
    Scanner bruh = new Scanner(System.in);

    int a = bruh.nextInt();
    int b = bruh.nextInt();

    while(b != 0){
      int temp = (a & b) << 1;
      a = a ^ b;
      b = temp;
    }

    System.out.println(a);

    

  }

}











