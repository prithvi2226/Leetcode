/**
 * @author : 91996
 * @created : 2022-09-27
**/

import java.util.*;

class TwoSum{

  public static int[] findTwoSum(int[] nums, int target){

    HashMap<Integer, Integer> Storage = new HashMap<>();

    for(int i = 0; i <= nums.length; i++){

      int current = num[i];

      //curr + x = target
      //x = target - curr

      int x = target - current;

      if(Storage.containsKey(x)){

        return new int[]{Storage.get(x), i};

      }

      Storage.put(current, i);



    }


    return null;

    

  


  }



}






