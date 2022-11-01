/**
 * @author : 91996
 * @created : 2022-10-13
**/



import java.util.*;


class MinSortedArray{

  public static void main(String[] args){

    Scanner prithvi = new Scanner(System.in);

    int n = prithvi.nextInt();


    int[] pri_array = new int[n];

    for(int i = 0; i < n; i ++){

      pri_array[i] = prithvi.nextInt();

    }

    
    int result = pri_array[0];

    int left = 0;
    int right = (pri_array.length) - 1;

    while(left <= right){

      if(pri_array[right] >= pri_array[left]){
        
        result = Math.min(result, pri_array[left]);
        System.out.println(result);
        break;

      }

      int mid = (left + right)/2;

      result = pri_array[mid];
      //result = 5
      //[3,4,5,1,2]
      //[3,4,5,0.5,1,2]

      if(pri_array[mid] >= pri_array[left]){
      
        left = mid + 1;

      }
      else{
        
        right = mid - 1;

      }

    }





  }

}










