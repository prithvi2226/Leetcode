/**
 * @author : 91996
 * @created : 2022-09-29
**/


import java.util. *;


class Duplicate{
  public static void main(String[] args){

    HashSet<Integer> map = new HashSet<Integer>();

    Scanner input = new Scanner(System.in);

    int n = input.nextInt();

    int[] array = new int[n];

    for(int i = 0; i < n; i++){
      
      array[i] = input.nextInt();

    }


    for(int i = 0; i < n; i++){

      if( map.contains(array[i]) ){
            System.out.println("true");
            System.exit(0);

      }
    



      map.add(array[i]);

    }
    System.out.println("false");

















  }
}






