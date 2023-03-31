/*
	Name : Prithvi Prathapan
	Application : Leetcode ANAgram
	Lang : C++
	Date : 27 - 3 - 23

*/

#include<iostream>
#include<cstdlib>
#include<array>
#include<string>
#include<utility>
#include<vector>
#include<unordered_map>

using std::string;

bool anagram(string s, string t);

bool anagram(string s, string t){

	if(s.size() != t.size()){
		return false;
	}

	std::unordered_map<char, int> strings;

	for(char c : s){
		strings[c]++;
	}

	for(char c : t){
		if(strings.count(c) == 0 || strings[c] == 0){
			return false;
		}
	}

	return true;


}



int main(int argc, char const *argv[])
{
	
	string s;
	string t;

	std::cin >> s;
	std::cin >> t;

	bool res = anagram(s, t);

	if(res){
		std::cout << "true" << std::endl;
	}
	else{
		std::cout << "false" << std::endl;
	}

	return 0;
}






