#include <iostream>
#include <string>

bool isPalindrome(std::string s, int start, int end);
std::string cleanString(std::string s);

bool isPalindrome(std::string s, int start, int end){
    if(start >= end){
        return true;
    }

    if(s[start] != s[end]){
        return false;
    }

    return isPalindrome(s, start + 1, end - 1);
}

std::string cleanString(std::string s){
    std::string clean;
    
    for(char c : s){
        if(std::isalnum(c)){
            clean += static_cast<char>(std::tolower(static_cast<int>(c)));
        }
    }

    return clean;
}

int main(int argc, char const *argv[])
{
    std::string s;
    std::getline(std::cin, s);

    std::string clean = cleanString(s);

    if(isPalindrome(clean, 0, clean.size()-1)){
        std::cout << "true" << std::endl;
    }
    else{
        std::cout << "false" << std::endl;
    }

    return 0;
}
