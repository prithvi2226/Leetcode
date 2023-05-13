Recursion
**When a function calls itself UNTIL a specific condition is met**

### RECURSION TREE

Every function in the recursion call is truncated into trees like structure so that we dont have to write the functions again and again

### 2. Print The Name N times Using Recursion

```c++
int main(){
	int n;
	cin >> n;
	f(1, n);
}
```

Time Complexity - O(n) - function calling n times.
Space Complexity - O(n) - function being stored in the stack for n times.

### 3. Backtracking Summation

### 4. Functional Recursion


```cpp
f(n){
	if(n==0){
	return 0;
	}

	return n + f(n-1);
}
```
lets say f(3) {in the main function n is 3}

```cpp
f(3){
	if(n==0){
	return 0;
	}//not 0

	return 3 + f(n-1);
}
```
So, after return n + f(n-1); the function will wait for f(n-1).
and it will again got to
f(n-1)
```cpp
f(2){
	if(n==0){
	return 0;
	}// 2 is not 0 hence wont go in this condition

	return 2 + f(n-1);
}
```

f(n-1)
```cpp
f(1){
	if(n==0){
	return 0;
	}

	return 1 + f(n-1);
}
```

f(n-1)
```cpp
f(0){
	if(n==0){
	return 0;
	}// Yes it will return 0 now

	return //2 + f(n-1);
}
```
Now as the function hits the base case, it returns a 0 and it backtracks to f(1) wit the
value 0. And then f(1) returns with 1 + 0, and it again backtracks to f(2) with value 1;
and f(2) returns with value 2+1 and finally finishes f(3) with value 3 + (3) = 6. Nice


### 5. Fibonacci Series till some number(Product)
```cpp
long long f(int n){
        if(n==0) return 1;
        return n*f(n-1);
    }
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        int i =1;
        vector<long long> ans;
        while(f(i)<=N){
            ans.push_back(f(i));
            i++;
        }
        return ans;
```


### 6. Palindrome in array
*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.*

So we would use the same concept as we used in reversing the array of numbers
But we will check with strings instead of array elements!!


### 7. Multiple recursion calls(FIBANACCI)

First recursion function will be excecuted first, then it will move to the second one.

