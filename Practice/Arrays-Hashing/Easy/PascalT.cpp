/*
	Name : Prithvi Prathapan
	Application : Pascals Triangle
	Lang : C++
	Date : 29 - 3 - 23

*/


#include<iostream>
#include<vector>
#include<utility>


int main(int argc, char const *argv[])
{
	/* code */

	int n;

	std::cin >> n;

	std::vector<std::vector<int>> pascal(n);

	for(int i = 0; i < n; i++){
		/* code */
		pascal[i].resize(i+1);
		pascal[i][0] = pascal[i][i] = 1;

		for (int j = 1; j < i; j++){
			/* code */
			pascal[i][j] = pascal[i-1][j-1] + pascal[i+1][j+1];
		}

	}

	std::cout << "[";
    for (int i = 0; i < n; ++i) {
        std::cout << "[";
        for (int j = 0; j < i+1; ++j) {
            std::cout << pascal[i][j];
            if (j != i) {
                std::cout << ",";
            }
        }
        std::cout << "]";
        if (i != n-1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;




	return 0;
}








