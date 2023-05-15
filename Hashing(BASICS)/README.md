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

Thats where the STL comes in the picture










