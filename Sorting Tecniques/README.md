---
Tags: #sorting  #A2z
understanding: #easy
---

## <mark style="background: #ABF7F7A6;">SELECTION SORT</mark>

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







