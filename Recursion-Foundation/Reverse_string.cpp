#include<iostream>


std::string Reverse(std::string s, int index){
  if(index >= s.size()){
    return "";
  }
  return Reverse(s, index + 1) + s[index];
}

int main (int argc, char *argv[]) {

  std::cout << "Enter the string to be reversed" << std::endl;

  std::string s;
  std::cin >> s;

  int index = 0;
  
  std::cout << Reverse(s, index) << std::endl;
  
  return 0;
}
