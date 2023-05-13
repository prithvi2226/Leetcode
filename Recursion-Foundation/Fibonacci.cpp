#include<iostream>

int fib(int n);

int fib(int n){
    if(n <= 1){
        return n;
    }

    int first = fib(n - 1);
    int sec = fib(n - 2);

    return first + sec;
}


int main(){
    int n;

    std::cin >> n;

    int ans = fib(n);

    std::cout << ans << std::endl;

    return 0;
}