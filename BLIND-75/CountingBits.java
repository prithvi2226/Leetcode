/**
 * @author : 91996
 * @created : 2022-11-02
**/



import java.util.*;

class CountingBits{
  public static void main(String[] args){
    
    Scanner input = new Scanner(System.in);

    int n = input.nextInt();

    int[] result = new int[n + 1];

    result[0] = 0;

    int offset = 1;

    for(int i = 1; i < n+1 ; i ++){

      if(offset*2 == i){
        offset = i;
      }

      result[i] = 1 + result[i - offset];

    }
    
    System.out.println(Arrays.toString(result));

  }
}








