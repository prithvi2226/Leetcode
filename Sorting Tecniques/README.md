---
Tags: #sorting  #A2z
understanding: #easy
---

## 1. <mark style="background: #ABF7F7A6;">SELECTION SORT</mark>

- As the name suggests, we sleect the minimum

1. Step 1 states get the minimum, and whoever is the first goes to that minimums place.
2. Step 2 states we get the mininum in the remaining array and place it in the first position
3. step 3 again find the minium in the unsorted array and swap it with first pos of the unsorted array

SELECTIONS SORT ALGORITHM - GET THE MIN AND SWAP

Its fair to say that for 6 elements only 5 operations would take place because in the 5th operation all the items would be sorted


```cpp
 //code here
       for(int i = 0; i <= n-2; i++){
           int mini = i;
           for(int j = i; j <= n-1; j++){
               if(arr[j] < arr[mini]){
                   mini = j;
               }
           }
           std::swap(arr[mini], arr[i]);
       }
```




---
Tags: #sorting  #A2z
understanding: #easy
---

## 2. <mark style="background: #ABF7F7A6;">BUBBLE SORT</mark>

1. Pushes the maximum to the last *by adjacent swaps*
2. Exact opposite of selection sort which used to push te minimum to the front.

We have elements: 13, 46, 24, 52, 20, 9

1. We check 13 and 46 and we say 13 < 46 so keep it there, then we go to 46 and 24 and we see that 46 !< 24 and swap it. 
	
	Now it becomes: 13, 24, 46, 52, 20, 9

2. Now we go to 46 and 52 and they are good, and next go to 52 and 20, 52 !< 20 therefore swap 52 and 20.
	Becomes - 13, 24, 46, 20, 52, 9

3. Then again 52 and 9, 52!<9, hence swap 52 and 9 therefore we know that the max element in the array has been sent to the last index of the array

*Ie for the first step to get max eelement we are looping from 0 to n-1 in the first iteration and the n-1th element is now sorted!*

There will be 2 for loops in order to
1. Iterate 
2. The second one 

The first loop goes from the last element to the first element. We do this because we can adjust the inner loop according to the size of the array we want to compare the elements from.

```cpp
void bubbleSort(int arr[], int n)
    {
        // Your code here  
        
        for(int i = n - 1; i >= 1; i--){
            for(int j = 0; j <= i - 1; j++){
                if(arr[j] > arr[j+1]){
                    std::swap(arr[j], arr[j+1]);
                }
            }
        }
    
    }
```



---
Tags: #sorting  #A2z #insertionsort
understanding: #easy
---

## 3. <mark style="background: #ABF7F7A6;">INSERTION SORT</mark>

IT always takes an element and places it on its correct order
Algorithm starts with looking at the first element in the array.

| 14  | 9   | 15  | 12  | 6   | 8   | 13  |
| --- | --- | --- | --- | --- | --- | --- |

we take the first element as 14 so we know that 14 is size 1 array and its at the right position. 
Then we go to the next element and compare to its left 9 and14 9 < 14 so swap (9, 14). now array is 9,14 this is array is perfectly sorted. Now third array 9, 14, 15 already sorted then 12.array looks
9 ,14, 15, 12, 6, 8, 13

In 12, we go to the left. compare toits left until we meet a element bigger than that. so 12 < 15 we swap. then 12<14 we swap . but not 9!<12. Hence array becomes 9, 12, 14, 15. This array is perfectly sorted.

Therefore we will have 2 loops again. One to select the array. the second loop to insert the array in the right position in the given array.

```cpp
void insert(int arr[], int i)

    {

        //code here

        int n = i;

        for(int i = 0; i <= n-1; i++){

            int j = i;

            while(j > 0 && arr[j-1] > arr[j]){

                int temp = arr[j-1];

                arr[j-1] = arr[j];

                arr[j] = temp;

                j --;

            }

        }

    }
```

## 4. <mark style="background: #ABF7F7A6;">MERGE SORT</mark>

[3, 1, 2 ,4, 1, 5, 2, 6, 4]

We hypothetically divide the array in 2 equal halves. Lets say, 4 and 5 elements half

![Page1.jpg](./MERGE%20SORT/Page1.jpg)
![Page2.jpg](./MERGE%20SORT/Page2.jpg)
![Page3.jpg](./MERGE%20SORT/Page3.jpg)
![Page4.jpg](./MERGE%20SORT/Page4.jpg)
![Page5.jpg](./MERGE%20SORT/Page5.jpg)
![Page6.jpg](./MERGE%20SORT/Page6.jpg)
![Page7.jpg](./MERGE%20SORT/Page7.jpg)
![Page8.jpg](./MERGE%20SORT/Page8.jpg)
![Page9.jpg](./MERGE%20SORT/Page9.jpg)
![Page10.jpg](./MERGE%20SORT/Page10.jpg)
![Page11.jpg](./MERGE%20SORT/Page11.jpg)
![Page12.jpg](./MERGE%20SORT/Page12.jpg)
![Page13.jpg](./MERGE%20SORT/Page13.jpg)


## 5. <mark style="background: #ABF7F7A6;">QUICK SORT</mark>

![Page1.jpg](./QUICK%20SORT/Page1.jpg)
![Page2.jpg](./QUICK%20SORT/Page2.jpg)
![Page3.jpg](./QUICK%20SORT/Page3.jpg)
![Page4.jpg](./QUICK%20SORT/Page4.jpg)
![Page5.jpg](./QUICK%20SORT/Page5.jpg)
![Page6.jpg](./QUICK%20SORT/Page6.jpg)
![Page7.jpg](./QUICK%20SORT/Page7.jpg)
![Page8.jpg](./QUICK%20SORT/Page8.jpg)
![Page9.jpg](./QUICK%20SORT/Page9.jpg)
![Page10.jpg](./QUICK%20SORT/Page10.jpg)
![Page11.jpg](./QUICK%20SORT/Page11.jpg)
![Page12.jpg](./QUICK%20SORT/Page12.jpg)
![Page13.jpg](./QUICK%20SORT/Page13.jpg)
![Page14.jpg](./QUICK%20SORT/Page14.jpg)
![Page15.jpg](./QUICK%20SORT/Page15.jpg)
![Page16.jpg](./QUICK%20SORT/Page16.jpg)
![Page17.jpg](./QUICK%20SORT/Page17.jpg)
![Page18.jpg](./QUICK%20SORT/Page18.jpg)


























