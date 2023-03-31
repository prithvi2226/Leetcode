/*
	Name : Prithvi Prathapan
	Application : Buy and Sell stock 1
	Lang : C++
	Date : 30 - 3 - 23

*/

#include<iostream>
#include<cstdlib>


int Sell(int array[], int n);

int Sell(int arr[], int n){

	int min_sofar = INT_MAX;

	int max_profit = 0;


	for(int i = 0; i < n; i ++){

		if(arr[i] < min_sofar){
			min_sofar = arr[i];
		}

		else if(arr[i] - min_sofar > max_profit){
			max_profit = arr[i] - min_sofar;
		}
	}

	return max_profit;
}


int main(int argc, char const *argv[])
{
	/* code */

	int n;

	std::cin >> n;

	int arr[n];

	for(int i = 0; i < n; i++){

		std::cin >> arr[i];
	}

	int res = Sell(arr, n);

	std::cout << res << std::endl;

	return 0;
}










