

/*
	User: Prithvi Prathap
	Application: House Robber
	Language: CPP
	Date: 25 - 11 - 22

*/


#include<iostream>
#include<cstdlib>


using namespace std;


int main(int argc, char const *argv[])
{
	int nums[5] = {1, 2, 3, 4, 5};

	int sum1 = nums[0];
	int sum2 = nums[1];

	int len = sizeof(nums) / sizeof(int);

	for (int i = 0; i < len - 1; i++)
	{
		/* code */
		sum1 += nums[i + 2];
		i++;
		//cout << sum << endl;

	}

	cout << sum1 << endl;

	for(int j = 1; j < len; j++)
	{
		/* code */
		sum2 += nums[j + 2];
		j++;
		cout << sum2 << endl;

	}

	cout << sum2 << endl;

	return 0;
}










