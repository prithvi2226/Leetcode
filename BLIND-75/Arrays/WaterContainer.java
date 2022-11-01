/**
 * @author : 91996
 * @created : 2022-11-01
**/




import java.util.*;


class WaterContainer{

  public static void main(String[] args){
    
    Scanner input = new Scanner(System.in);

    int n = input.nextInt();

    int[] height = new int[n];

    for(int i = 0; i < n; i++){

      height[i] = input.nextInt();

    }
    int res = 0;

    int heights = 0;
    int width = 0;
    int left = 0;
    int area = 0;
    int right = height.length - 1;

    while(left < right){
      width = right - left;
      heights = Math.min(height[left], height[right]);

      res = heights * width;

      area = Math.max(area, res);

      if(height[left] < height[right]){
        left ++;
      }
      else{

        right --;
      }

    }

    System.out.println(area);


  }


}








