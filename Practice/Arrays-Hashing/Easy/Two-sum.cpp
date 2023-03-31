/*
    Name : Prithvi Prathapan
    Application : Leetcode Two sum
    Lang : C++
    Date : 28 - 3 - 23

*/

#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>


void TwoSum(int n, int target, int arr[]);

void TwoSum(int n, int target, int arr[]){

    std::vector<std::pair<int, int>> sm(n);
    std::vector<int> mal = {0, 0};

    for(int i = 0; i < n; i ++){
        sm[i] = std::make_pair(arr[i], i);
    }

    int left = 0;
    int right = n - 1;

    std::sort(sm.begin(), sm.end());


    for(int i = 0; i < n; i ++){
        int res = sm[left].first + sm[right].first;

        if(res == target){
            mal[0] = sm[left].second;
            mal[1] = sm[right].second;
            break;
        }
        if(res < target){
            left ++;
        }
        if(res > target){
            right ++;
        }
    
    }

    std::cout << mal[0] << mal[1] << std:: endl;
    
}


int main(){
    
    int n, target;
    std::cin >> n >> target;
    int arr[n];

    for(int i = 0; i < n; i ++){
        std::cin >> arr[i];
    }

    TwoSum(n, target, arr);
    
    return 0;
}
