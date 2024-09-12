#include<iostream>

//he will enter the no reqd for fibonacci

int fib(int n){
  if (n == 0 || n == 1) {
    return 1; 
  }
  return n * fib(n - 1);
}


int main (int argc, char *argv[]) {
  int n;
  std::cout << "enter a no" << std::endl;
  std::cin >> n;

  std::cout<< "factorial is: " << fib(n) << std::endl;
  return 0;
}

