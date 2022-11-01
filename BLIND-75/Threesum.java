/**
 * @author : 91996
 * @created : 2022-10-26
**/

import java.util.*;

class Threesum{
  public static void main(String[] Args){

    Scanner input = new Scanner(System.in);

    int n = input.nextInt();
    int[] nums = new int[n];

    for(int i = 0; i < n; i++){

      nums[i] = input.nextInt();

    }

    Arrays.sort(nums);


    List<List<Integer>> result = new ArrayList<List<Integer>>();

    if(nums == null || nums.length == 0){
      System.out.println(result);
    }

    for(int i = 0; i < nums.length; ++i){
      int left = i + 1;
      int right = nums.length - 1;

      while(left < right){
        int sum = nums[i] + nums[left] + nums[right];

        List<Integer> list = new ArrayList<>();

        if(sum == 0){
          list.add(nums[i]);
          list.add(nums[left]);
          list.add(nums[right]);
          result.add(list);

          //Check duplicates
          int leftval = nums[left];
          while(left < nums.length && nums[left] == leftval){
            ++left;
          }

          int rightval = nums[right];
          while(right > left && nums[right] == rightval){
            --right;
          }

        }
        else if(sum < 0){
          ++left;
        }
        else{
          --right;
        }

      }
      //int a = nums[i];

      while(i + 1 < nums.length && nums[i] == nums[i + 1]){
        ++i;
      }

    }

    System.out.println(result);


  }
}







