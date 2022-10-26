/**
 * @author : 91996
 * @created : 2022-10-15
**/


import java.util.*;


class SearchRotateArray{
  public static void main(String[] Args){

    Scanner input = new Scanner(System.in);

    int n = input.nextInt();

    int[] array = new int[n]; 

    for(int i = 0; i < n; i ++){
  
      array[i] = input.nextInt();

    }


    int left = 0;
    int right = array.length - 1;
    int count  = 0;

    int target = input.nextInt();

    while(left <= right){

      int mid = (left + right)/ 2;
      

      if(array[mid] == target){
        System.out.println(mid);
        count = 1;
      }


      if(array[left] <= array[right]){

        if((target < array[left]) || (target > array[mid])){
          left = mid + 1;
        }
        else{
          right = mid - 1;
        }
      }

      else{
        
        if((target > array[right]) || (target < array[mid])){
          right = mid - 1;
        }

        else{
          left = mid + 1;
        }          
        
      }
    


  }
  if(count == 0){
    System.out.println("-1");
  }

  }

}







