---
Tags: #Hashing #A2z
---

## HASHING VERY IMPORTANT

If you dont understand hashing,

Wont be Able to solve a lot of DSA problems

### <mark style="background: #ABF7F7A6;">1. Iterating the count of a particular number
</mark>
It takes o(n) to find the count of the number in standard array. 

```cpp
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}


	//precompute
	int hash[13]
	for(int i = 0; i<n; i++){
		hash[arr[i]] += 1;
	}
	
	int q;
	cin >> q;
	while(q --){
		int number;
		cin >> number;
		//fetch
		cout << hash[number] << endl;
	}
	return 0;
}

```

```cpp
int hash[13]
```
13 we took just for example
generally we take input how much the limit is given for the input. if the input array numbers can 0 to 10^9 then we keep the hash array of that size.

ALso I cannot declare hash[size] the size more than 10^6 inside the main function. But globally, I can declare it to be of size 10^7

```cpp
int hash[1e7];
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}


	//precompute
	for(int i = 0; i<n; i++){
		hash[arr[i]] += 1;
	}
	
	int q;
	cin >> q;
	while(q --){
		int number;
		cin >> number;
		//fetch
		cout << hash[number] << endl;
	}
	return 0;
}

```



### <mark style="background: #ABF7F7A6;">2. Character Hashing Using arrays
</mark>


a to z = 26 elements
So only 26 size hash array

correspond a - 0, b - 1, c - 2 
| 0   | 1   | 2   | 3   | 4   | --  | 25  |
| --- | --- | --- | --- | --- | --- | --- |
| a   | b   | c   | d   | e   | --  | z   |

We would be corresponding them using ASCII values
ASCII value of 'a' = 97.

so int x = 'a'
x will be 97

so to find values of alphabets:
we do 'f' - 'a' which is 102 - 97 = 5 thats what we want.

And God Forbid if we have uppercase as well, we know that we have total of 256 characters in total. so then we create a hash array of 256 size.

```cpp
int main(){
	string s;
	cin >> s;

	//precompute
	int hash[26] = {0};
	for(int i = 0; i < s.size(); i++){
		hash[s - 'a'] += 1;
	}

	int q;
	cin >> q;
	while(q--){
		char c;
		cin >> c;
		cout << hash[c - 'a'] << endl;
	}
}
```


In character there will be never be aproblems liek numbers. Because at max there will be 256 values.

Always prefer arrays. And always prefer this logic (char c - 'a')

or (char c - 'A')


### <mark style="background: #ABF7F7A6;">3. Numbers more than 10^6</mark>

Thats where the STL comes in the picture. In STL there are two things:

1. MAP
2. UNORDERED MAP

#### MAPS
- map<key, value> = map<int, int>
- Key can be anything char, pair or any data structure 
- map<pair<int, int>, int>
Lets say:
arr = [1, 2, 3, 1, 3, 2, 12]

It wont have to save all the 13 elements like in array. In hashmaps we use only those elements present in the array.
1 -> 2
2 -> 2
3 -> 2
12 -> 1

Only 4 elements stored.
Map stores values in sorted order

```cpp
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	//precompute
	map<int, int> mpp;
	for(int i = 0; i < n; i++){
		mpp[arr[i]] ++;
	}

	int q;
	cin >> q;
	while(q--){
		int number;
		cin >> number;
		//fetch
		cout << mpp[number] << endl;
	}
	return 0;
}
```


For integer count:
map<char, int>


Time complexity :
Storing: log(n) in all cases (no of elements in map - logn)
Fetching: log(n) in all cases


#### UNORDERED MAPS
- In unordered maps Key can not be anything char, pair or any data structure 
- map<pair<int, int>, int> - cannot do this only int, char, double

```cpp
int main(){
	int n;
	cin >> n;
	int arr[n];
	unordered_map<int, int> mpp;

	for(int i = 0; i < n; i++){
		cin >> arr[i];
		mpp[arr[i]] ++;
	}

	//iterate in the map
	for(auto x : mpp){
		cout << x.first << " ->" << x.second << endl;
	}

	int q;
	cin >> q;
	while(q--){
		int number;
		cin >> number;
		//fetch
		cout << mpp[number] << endl;
	}
	return 0;
}
```

The order would be onordered or not sorted.
The MAJOR difference is that:

Time complexity:
1. Storing: o(1) in 99% of cases
2. Fetching: o(n) (no of elements in the map) THis is the worst of the worst case which will happen like 1%.



### HASHING METHODS
To answer the question: WHAT IS COLLISIONS?
How is the map designed?


1. DIVISION METHOD
2. FOLDING METHOD
3. MID SQUARE METHOD


1. DIVISION METHOD

arr - 2, 5, 16, 28, 139

But we want to hash it in 10 elements instead of 139. What do we do for that??
Division method says that divide it by the no of elements and store at the place of the remainder.
arr[i] % 10 - we get the last digit

2 - 2
5 - 5
16 - 6
28 - 8
139 - 9 

SO the hash array would look something like

|     |     | 1   |     |     | 1   | 1   |     | 1   | 1   |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9    |


Collision Happens when the worst case hits. ie every arr[i]%10 is on the same number.

arr - 2, 5, 16, 28, 139, 38, 48, 28, 18
we want it to be a hash of size 10

arr[i]%10 =

0 - 
1 - 
2 - 2
3
4
5 - 5
6 - 6
7
8 - 18 - 28 - 28 - 38 - 48
9

In 8 pos of hash, we will be using linked list to link them numbers in a chain and keep them in a sorted order while traversing through the array. And then if we want to find the total no of times 28 comes in the array, we can do binary search to find it. COllision is this. And the worst case is when we have n elements(lets say millions of elements) in the array and they all end in 8 that is when collision happens and is o(n).

2. FOLDING METHOD
3. MID SQUARE METHOD

These 2 are not required FOR NOW!



























































