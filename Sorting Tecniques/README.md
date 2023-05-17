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


























