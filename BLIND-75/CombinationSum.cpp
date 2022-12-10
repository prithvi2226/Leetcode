
/*
	User: Prithvi
	Application: Combination Sum 4
	Language: C++
	Date: 09 - 12 - 22

*/

#include<iostream>
#include<cstdlib>

int combination(int array[], int goal, int size);
using namespace std;


int combination(int array[], int goal, int size){

	//Base case

	if(goal == 0){
		return 1;
	}
	if(goal < 0){
		return 0;
	}

	int sum = 0;

	for(int i = 0; i < size; i ++){

		sum = sum + combination(array, goal - array[i], size);
	
	}
	cout << sum << endl;
	return sum;

}



int main(int argc, char const *argv[])
{
	int arr[] = {1, 2};

	int target = 3;

	int len = (sizeof(arr)/ sizeof(arr[0]));

	return combination(arr, target, len);

	//return 0;
}


















