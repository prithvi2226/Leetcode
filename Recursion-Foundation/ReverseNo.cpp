// #include<bits/stdc++.h>
#include<iostream>
#include<utility>
#include<vector>

using namespace std;

std::vector<int> reverseNo(int i, int n, std::vector<int> rev){
    
    if(i > n/2){
        return rev;
    }

    std::swap(rev[i], rev[n - i - 1]);

    reverseNo(i+1, n, rev);

    return rev;    

}


int main(){

    int n;
    std::cin >> n;

    std::vector<int> rev;

    for (int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        rev.emplace_back(x);
    }

    int i = 0;

    reverseNo(i, n, rev);

    for (int j = 0; j < n; j++)
    {
        /* code */
        std::cout << rev[j] << std::endl;
    }
    
    
    return 0;
}
